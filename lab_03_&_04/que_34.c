// PROGRAM TO PRINT FIBONACCI SERIES.(0,1,1,2,3…)

#include <stdio.h>
int main()
{
    int n, first = 0, second = 1, next;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        if(i == 1)
        {
            printf("%d ", first);
        }
        else if(i == 2)
        {
            printf("%d ", second);
        }
        next = first + second;
        first = second;
        second = next;
        printf("%d ", next);
    } 
    
    return 0;
}