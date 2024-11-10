/*
10000
01000
00100
00010
00001
*/

#include <stdio.h>
int main()
{
    int rows = 5;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < rows; j++)
        {
            if (i == j)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
            
        }
        printf("\n");
    }

    return 0;
}