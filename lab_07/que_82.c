// WRITE A FUNCTION TO CALCULATE (NCR) FACTORIAL OF A GIVEN NUMBERS.
//     NCR = (!N/(!R*!(N-R)));

#include <stdio.h>

int factorial(int n)
{
    int a;
    if (n == 1)
    {
        return 1;
    }
    else
    {
        a = n*factorial(n-1);
        return a;
    }
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The factorial of %d is %d", n, factorial(n));

    return 0;
}