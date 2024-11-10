// PROGRAM TO READ AN ARRAY AND PRINT THE OCCURRENCE OF ANY PARTICULAR ELEMENT IN THE ARRAY.

#include <stdio.h>

int main()
{
    int n, search_element, count = 0;
    printf("Enter the number of elements in an array: ");
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Enter element you want to count occurrences of: ");
    scanf("%d", &search_element);

    for (int i = 0; i < n; i++)
    {
        if (array[i] == search_element)
        {
            count++;
        }
    }

    if (count > 0)
    {
        printf("Element %d occurs %d times in an array", search_element, count);
    }
    else
    {
        printf("Element %d does not occur in an array", search_element);
    }

    return 0;
}