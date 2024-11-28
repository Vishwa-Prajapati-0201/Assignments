// WRITE A PROGRAM TO FIND LENGTH OF A GIVEN STRING INCLUDING AND EXCLUDING SPACES USING POINTERS.

#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    char *a = str, *b = str, *c = str;

    while (*a != '\0')
    {
        if (*a != ' ')  
        {
            b++;
        }
        a++;
    }

    int length_1 = a - c;
    int length_2 = b - c;

    printf("%d is a length including spaces\n", length_1);
    printf("%d is a length excluding spaces\n", length_2);

    return 0;
}