/*
PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND STORE ADDITION OF THOSE
ARRAYS INTO THIRD.
*/

#include<stdio.h>
int main()
{
    int arr1[10]; 
    int arr2[10]; 
    int arrsum[10]; 

    printf("Enter the data for array 1 \n");

    for(int i = 0; i < 10; i++)
    {
    printf("Enter number: ");
    scanf("%d", &arr1[i]);
    }

    printf("Enter the data for array 2 \n");
    
    for(int i = 0; i < 10; i++)
    {
        printf("Enter number: ");
        scanf("%d", &arr2[i]);
    }
    
    for(int i = 0; i < 10; i++)
    {
        arrsum[i] = arr1[i] + arr2[i];
    }
    
    printf("The sum of all entered elements is \n");

    for(int i = 0; i < 10; i++)
    {
        printf("%d\n", arrsum[i]);
    }
    return 0;
}