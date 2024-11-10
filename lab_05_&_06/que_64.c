// PROGRAM TO READ A 3*3 MATRIX AND PRINT SUM OF ALL ROWS.

#include <stdio.h>
int main()
{
    int a[3][3];

    for (int i = 0; i < 3; i++)
    {
       for(int j = 0; j < 3; j++)
       {
            printf("Enter [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
       }
    }

    for(int i = 0; i < 3; i++)
    {
        int sum = 0;
        for(int j = 0; j < 3; j++)
        {
            sum += a[i][j];    
        }
        printf("The sum of the elements of %d row is %d\n", i, sum);
    }
    

    return 0;
}