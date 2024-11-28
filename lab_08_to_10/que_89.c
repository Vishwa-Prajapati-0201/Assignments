// WRITE A PROGRAM TO COPY ONE ARRAY INTO ANOTHER ARRAY. ORDER OF ELEMENTS OF SECOND ARRAY SHOULD BE OPPOSITE TO FIRST ARRAY.

#include <stdio.h>

int reverse(int arr[], int n);
int reverse(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    
}

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int array_1[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array_1[i]);
    }

    int array_2[n];
    for (int i = 0; i < n; i++)
    {
        *(array_2 + i) = *(array_1 + i);
    }

    reverse(array_2, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", array_2[i]);
    }

    return 0;
}