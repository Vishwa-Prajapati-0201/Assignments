// PROGRAM TO REVERSE AN ARRAY.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < (n/2); i++)
    {
        int c = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = c;
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    
    return 0;
}