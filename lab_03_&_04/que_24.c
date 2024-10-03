/*
WRITE A C PROGRAM TO FIND THE VALUE OF Y USING
              1+x where n=1
              1+x/n where n=2
Y(x,n) =      1 + x^n when n=3
              1 + nx when n>3 or n<1
*/

#include <stdio.h>
int main()
{
    int x, y, n;
    int x_raises_to_n = 1;
    printf("Enter x and n: ");
    scanf("%d %d", &x, &n);

    if(n == 1)
    {
        y = 1 + x;
    }
    else if(n == 2)
    {
        y = 1 + (x/n);
    }
    else if(n == 3)
    {
        for(int i = 1; i <= n; i++)
        {
            x_raises_to_n *= x;
        }
        y = 1 + x_raises_to_n;
    }
    else
    {
        y = 1 + (n*x);
    }
    
    printf("y = %d", y);
    return 0;
}