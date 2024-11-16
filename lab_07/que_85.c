// WRITE A FUNCTION TO READ CHARACTER AND CHECK WHETHER IT IS VOWEL OR NOT.

#include <stdio.h>

void vowel_check(char c);
void vowel_check(char c)
{
    int flag = 0;
    char array[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

    for (int i = 0; i < 10; i++)
    {
        if (array[i] == c)
        {
            flag = 1;
            printf("The character is vowel\n");
            break;
        }
    }
    if (flag == 0)
    {
        printf("The character is not vowel\n");
    }
}

int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    vowel_check(c);
    return 0;
}