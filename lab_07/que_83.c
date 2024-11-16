// WRITE A FUNCTION TO READ AN ARRAY AND FOUND OUT MAXIMUM.

#include <stdio.h>

void array_max(int n)
{
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int max = array[0];
    for (int i = 0; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    printf("The maximum number is %d", max);
}

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    array_max(n);
    return 0;
}