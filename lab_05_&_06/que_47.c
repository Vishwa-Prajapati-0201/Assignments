/*
A
AB
ABC
ABCD
ABCDE
*/

#include <stdio.h>

int main()
{
    int row = 5;
    for(int i = 0; i < row; i++)
    {
        char alphabet = 'A';
        for(int j = 0; j <= i; j++)
        {
            printf("%c", alphabet);
            alphabet++;
        }
        printf("\n");
    }
    return 0;
}