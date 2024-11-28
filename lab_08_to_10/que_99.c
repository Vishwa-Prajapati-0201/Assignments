// WRITE A C PROGRAM TO READ THE TEXT FILE AND ALSO COUNT THE NUMBER OF VOWELS PRESENT IN THE FILE.

#include <stdio.h>

void vowel(char s[]);
void vowel(char s[])
{
    int vowel_count = 0;
    char array[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    char *a = s;

    while (*a != '\0')
    {
        for (int i = 0; i < 10; i++)
        {
            if (*(array + i) == *a)
            {
                vowel_count++;
            }
        }
        a++;
    }
    printf("The number of vowels in a file is %d", vowel_count);
}

int main()
{
    char string[100];
    FILE *fp;
    printf("enter data\n");
    fgets(string, 100, stdin);

    fp = fopen("vowel.txt", "w");
    fputs(string, fp);
    fclose(fp);

    fopen("vowel.txt", "r");
    fgets(string, 100, fp);
    vowel(string);
    fclose(fp);

    return 0;
}