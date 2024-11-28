/*
WRITE A PROGRAM IN C TO PRINT ALL PERMUTATIONS OF A GIVEN STRING USING POINTERS.
THE PERMUTATIONS
OF THE STRING ARE: ABCD ABDC ACBD ACDB ADCB ADBC BACD BADC BCAD BCDA BDCA BDAC CBAD
CBDA
CABD CADB CDAB CDBA DBCA DBAC DCBA DCAB DACB DABC
*/

#include <stdio.h>

void swap(char *a, char *b);
void generatePermutations(char *str, int left, int right);

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int n = strlen(str);

    printf("All permutations of the string are:\n");
    generatePermutations(str, 0, n - 1);

    return 0;
}

void swap(char *A, char *B)
{
    char temp = *A;
    *A = *B;
    *B = temp;
}

void generatePermutations(char *C, int left, int right)
{
    if (left == right)
    {
        printf("%s\n", C);
        return;
    }

    for (int i = left; i <= right; i++)
    {
        swap(C + left, C + i);

        generatePermutations(C, left + 1, right);

        swap(C + left, C + i);
    }
}