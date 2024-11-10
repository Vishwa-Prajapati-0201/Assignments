/*
    1
   12
  123
 1234
12345
*/

#include <stdio.h>

int main()
{
    int row = 5;
    for(int i = 0; i < row; i++)
    {
        
        for(int j = 0; j <= (row - i) - 1; j++)
        {
            printf(" ");
        }

        int n = 1;
        for (int k = 0; k <= i; k++)
        {
            printf("%d", n);
            n++;
        }
        
        printf("\n");
    }
    return 0;
}