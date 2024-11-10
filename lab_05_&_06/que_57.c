// PROGRAM TO READ N NOS AND FINDOUT MAX AND SECOND MAX.

#include<stdio.h>
int main()
{   
    int n;

    printf("Enter the value of N: ");
    scanf("%d", &n);
    
    int arr[n]; 
    
    for(int i = 0; i < n; i++)
    {
        printf("Enter number:");
        scanf("%d", &arr[i]);
    }

    int max = arr[0]; 
    for(int i = 0; i < n; i++)
    {   
        if (max < arr[i]) 
        max = arr[i]; 
    }
    
    for(int i = 0; i < n; i++)
    {
        if (max == arr[i])
        arr[i] = 0;
    }
    
    int secondmax = arr[0];
    for(int i =0; i < n ; i++)
    {
        if(secondmax < arr[i])
        secondmax = arr[i];
    }
    
    printf("%d is the maximum and %d is the second maximum of all the entered numbers.", max, secondmax);
    return 0;
}