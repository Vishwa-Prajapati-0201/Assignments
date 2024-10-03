// PROGRAM TO REVERSE OF A GIVEN NO.

#include <stdio.h>
int main()
{
    int n, remainder, reversed_num = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    while(n != 0)
    {
        remainder = n % 10;
        reversed_num = (reversed_num*10) + remainder;
        n /= 10;
    }
    printf("Reversed number is %d", reversed_num);
    
    return 0;
}