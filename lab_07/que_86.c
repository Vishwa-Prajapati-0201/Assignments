// WRITE A FUNCTION TO READ LINE OF TEXT AND FIND OUT LENGTH OF STRING.

#include <stdio.h>

int length_of_string(char string[]);
int length_of_string(char string[])
{
    int count = 0;
    while (string[count] != '\0')
    {
        count++;
    }
    return count;
}

int main()
{
    char string[100];
    printf("Enter a line\n");
    gets(string);

    printf("%d", length_of_string(string));
    return 0;
}