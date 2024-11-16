// WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS ARMSTRONG OT NOT.

#include <stdio.h>

void func(int);
void func(int n)
{
    int remainder, sum = 0, temp;
    temp = n;

    while(n != 0)
    {
        remainder = n % 10;
        sum = sum + (remainder*remainder*remainder);
        n = n/10;
    }

    if (temp == sum)
    {
        printf("%d is an armstrong number", temp);
    }
    else
    {
        printf("%d is not an armstrong number", temp);
    }  
}

int main()
{
    int n; 
    printf("Enter a number: ");
    scanf("%d", &n);

    func(n);
    return 0;
}