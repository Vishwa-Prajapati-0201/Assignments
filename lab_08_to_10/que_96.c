// WRITE A C PROGRAM TO SORT THE GIVEN N NUMBER OF STRINGS IN ASCENDING ORDER USING POINTERS.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of array to be declared: ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        printf("Enter the number: ");
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(*(arr + i) > *(arr + j))
            {
                int c = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = c;
            }
        }
    }

    printf("The array after sorting is \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }

    return 0;
}