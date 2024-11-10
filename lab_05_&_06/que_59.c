// PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND SWAP VALUES THESE ARRAYS.

#include<stdio.h>
int main()
{
    int arr1[10];   
    int arr2[10];  
    
    printf("Enter the data for array 1\n");
    
    for(int i = 0; i < 10; i++)
    {
        printf("Enter number:");
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter the data for array 2\n");

    for(int i = 0; i < 10; i++)
    {
        printf("Enter number: ");
        scanf("%d", &arr2[i]);

    }
   
    for(int i = 0; i < 10; i++)
    {
        int swap;
        swap = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = swap;
    }
       
    printf("Values after swapping\n");

    for(int i = 0; i < 10; i++)
    {
         printf("%d %d\n", arr1[i], arr2[i]);
    }

    return 0;
}