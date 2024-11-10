/*
PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO OF ODD AND
TOTAL NO. OF EVERY ELEMENT.
*/

#include<stdio.h>
int main()
{
    int arr[10]; 
    int evencount = 0; 
    int oddcount = 0; 

    for(int i = 0; i < 10; i++)
    {   
        printf("Enter number:");
        scanf("%d", &arr[i]);
        
        if(arr[i]%2 == 0)
        {
            evencount ++;
        }
        if(arr[i]%2 != 0)
        {
            oddcount ++;
        }

    }
    
    printf("You have entered %d even numbers and %d odd numbers.", evencount, oddcount);
    return 0;
}