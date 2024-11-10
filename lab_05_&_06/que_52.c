/*
   1
  121
 12321
1234321
*/

#include <stdio.h>
int main()
{
    int rows = 4;
    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= rows-i; j++)
        {
            printf(" ");
        }

        for(int j = 1; j <= (2*i)-1; j++)
        {
            printf("%d", j);
            if (j == i)
            {
                break;
            }
            
        }

        for(int j = i-1; j >= 1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}