// WRITE A FUNCTION THAT WILL GENERATE AND PRINT THE FIRST N FIBONACCI NUMBERS.TEST THE FUNCTION FOR N=5,10,AND 15.

#include <stdio.h>

int func(int n);
int func(int n)
{
    int first = 0, second = 1, next;
    for (int i = 1; i <= n-2; i++)
    {
        if (i == 1)
        {
            printf("%d ", first);
        }
        else if (i == 2)
        {
            printf("%d ", second);
        }

        next = first + second;
        first = second;
        second = next;
        printf("%d ", next);
    }
}

int main()
{
    int n;
    printf("Enter the number of terms of fibonacci series: ");
    scanf("%d", &n);

    func(n);

    return 0;
}