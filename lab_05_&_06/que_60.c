// PROGRAM TO SORT (SELECTION SORT) AN ARRAY.

#include <stdio.h>
int main()
{
    // int n;
    // printf("Enter the size of array to be declared: ");
    // scanf("%d", &n);
    int n = 5;
    // int arr[n];
    int arr[] = {1, 4, 3, 2, 9};

    // for(int i = 0; i < n; i++)
    // {
    //     printf("Enter the number: ");
    //     scanf("%d", &arr[i]);
    // }

    for(int i = 0; i < n; i++)
    {
        int min = arr[i];
        int min_index = i;
        for(int j = i+1; j < n; j++)
        {
            if(min > arr[j])
            {
                min = arr[j];
                min_index = j;
            }
        }
        // printf("%d ", min_index);
        int swap = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = swap;
        // printf("%d ", arr[i]);
    }

    printf("The array after sorting is \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }

    return 0;
}