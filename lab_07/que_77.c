// WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT.

#include <stdio.h>

void func(int n);
void func(int n)
{
    int remainder, sum = 0, temp;
    temp = n;

    while(n != 0)
    {
        remainder = n % 10;
        sum = (sum*10) + remainder;
        n = n/10;
    }

    if (temp == sum)
    {
        printf("The number is palindrome");
    }
    else
    {
        printf("The number is not palindrome");
    }
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    func(n);

    return 0;
}