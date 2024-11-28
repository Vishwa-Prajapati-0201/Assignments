// WRITE A PROGRAM TO COPY ELEMENT OF ONE ARRAY TO ANOTHER ARRAY USING POINTERS.

#include <stdio.h>

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

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", array_2[i]);
    }

    return 0;
}