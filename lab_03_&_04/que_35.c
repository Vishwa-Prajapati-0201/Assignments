// READ A NUMBER N AND PRINT A SINGLE DIGIT ANSWER SHOWING SUM OF DIGIT OF N

#include <stdio.h>
int main()
{
    int n, sum;
    printf("Enter a number: ");
    scanf("%d", &n);

    while(n >= 10)
    {
        sum = 0;
        while(n > 0)
        {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }

    printf("Single digit sum is %d", sum);
    return 0;
}