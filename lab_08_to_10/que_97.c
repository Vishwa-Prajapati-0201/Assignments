// WRITE A C PROGRAM TO COUNT THE NUMBER OF VOWELS IN A STRING USING POINTER.

#include <stdio.h>

int main()
{
    char string[100];
    printf("Enter a string: ");
    gets(string);

    int vowel_count = 0;
    char array[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    char *a = string;

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

    printf("The number of vowels in a string is %d", vowel_count);

    return 0;    
}