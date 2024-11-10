/*
PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO. OF POSITIVE,
NEGATIVE, AND ZERO ELEMENTS.
*/

#include <stdio.h>
#include <time.h>

int main()
{
    int arr[10]; 

    int poscount = 0; 
    int negcount = 0;
    int zerocount = 0;

    for(int i = 0; i < 10; i++) 
    {  
        printf("Enter number: ");
        scanf("%d", &arr[i]);
    
        if(arr[i] == 0)
        {
            zerocount ++;
        }
        if(arr[i] > 0)
        {
            poscount++;
        }
        if(arr[i] < 0)
        {
            negcount++;
        }

    } 

    printf("You have entered %d zeroes, %d positive numbers and %d negative numbers.", zerocount, poscount, negcount) ;
    return 0;
}