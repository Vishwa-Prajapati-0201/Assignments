// PROGRAM TO READ A 3*3 MATRIX AND FINDOUT MAX AND MIN ELEMENT.

#include <stdio.h>
int main()
{
    int a[3][3];

    for (int i = 1; i <= 3; i++)
    {
        for(int j = 1; j <= 3; j++)
        {
            printf("Enter the element of %d row and %d column: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int max = a[1][1]; 
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            if(max < a[i][j])
            {
                max = a[i][j];
            }
        }
        
    }

    int min = a[1][1];
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            if (min > a[i][j])
            {
                min = a[i][j];
            }
            
        }
        
    }
    
    printf("The maximum is %d and mininimum number is %d", max, min);
    
    return 0;
}