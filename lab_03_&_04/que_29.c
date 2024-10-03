// PROGRAM TO CHECK WHETHER A NO IS PALINDROM OR NOT.

#include <stdio.h>
int main()
{
    int n, remainder, sum = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;

    while(n != 0)
    {
        remainder = n % 10;
        sum = (sum*10) + remainder;
        n = n/10;
    }
    if(temp == sum)
    {
        printf("This number is palindrom");
    }
    else
    {
        printf("This number is not palindrom");
    }

    return 0;
}