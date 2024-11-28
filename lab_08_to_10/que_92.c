// WRITE A C PROGRAM USING POINTERS TO FIND THE BIGGEST OF GIVEN LIST OF N INTEGERS.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter an integer: ");
        scanf("%d", &array[i]);
    }

    int max = *(array);
    for (int i = 0; i < n; i++)
    {
        if (*(array+i) > max)
        {
            max = *(array+i);
        }
    }

    printf("The biggest integer is %d", max);
    
    return 0;
}