// PROGRAM TO READ AN ARRAY OF 10 INTEGER AND PRINT SUM OF NUMBERS.

#include<stdio.h>

int main()
{
    int arr[10]; 
    int sum = 0; 

    for(int i = 0; i < 10; i++)
    {
        printf("Enter number: ");
        scanf("%d", &arr[i]);

        sum = sum + arr[i];
    }

    printf("%d is the sum of entered number.", sum); 
    return 0;
}