// PROGRAM TO PRINT SUM OF INDIVIDUAL DIGITS OF A ‘N’ DIGIT NO.

#include <stdio.h>
int main()
{
    int n, q, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    while(n != 0)
    {
        q = n % 10;
        sum += q;
        n = n/10;
    }
    printf("Sum of individual digits is %d", sum);

    return 0;
}