/*
    *
   * *
  * * *
 * * * *
* * * * *
*/

#include <stdio.h>

int main()
{
    int row = 5;
    for(int i = 0; i < row; i++)
    {
        for (int j = 0; j < row - i; j++)
        {
            printf(" ");
        }

        for (int k = 0; k <= i; k++)
        {
            printf("* ");
        }
            
        printf("\n");
        
    }

    return 0;
}