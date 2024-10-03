// PROGRAM TO PRINT SUM OF ALL ODD AND EVEN NO B/W 1 TO N.

#include <stdio.h>
int main()
{
    int i = 1, n, odd_sum = 0, even_sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    while(i <= n)
    {
        if(i%2 == 0)
        {
            even_sum = even_sum + i;
        }
        else
        {
            odd_sum = odd_sum + i;
        }
        i++;
    }
    printf("Sum of odd numbers = %d\n", odd_sum);
    printf("Sum of even numbers = %d\n", even_sum);

    return 0;
}