// PROGRAM TO PERFORM LINEAR SEARCH ON AN ARRAY.

#include <stdio.h>

int main()
{
    int n, search_element, found = 0;
    printf("Enter the number of elements in an array: ");
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Enter the element you want to search: ");
    scanf("%d", &search_element);

    for (int i = 0; i < n; i++)
    {
        if(array[i] == search_element)
        {
            printf("Element %d found at position %d", search_element, i + 1);
            found = 1;
            break;
        }
    }
    
    if(found == 0)
    {
        printf("Element %d not found in the array", search_element);
    }

    return 0;
}
