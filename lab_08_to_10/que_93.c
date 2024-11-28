// WRITE A C PROGRAM USING POINTER TO COUNT THE NUMBERS OF WORDS IN A GIVEN STRING.

#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    char *a = str;
    int count = 1;

    while (*a != '\0')
    {
        if (*a == ' ')
        {
            count++;
        }
        a++;
    }
    printf("The number of words is %d", count);

    return 0;
}