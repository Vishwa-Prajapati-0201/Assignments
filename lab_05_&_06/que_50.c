/*
A
BB
CCC
DDDD
EEEEE
*/

#include <stdio.h>
int main()
{
    int rows = 5;
    char alphabet = 'A';
 
    for (int i = 0; i < rows; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("%c", alphabet);
        }
        alphabet++;
        printf("\n");
    }
    
    return 0;
}