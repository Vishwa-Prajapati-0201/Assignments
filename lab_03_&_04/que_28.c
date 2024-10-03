// PROGRAM TO CHECK WHETHER A NO IS ARMSTRONG OR NOT.

#include <stdio.h>
int main()
{
    int n, remainder, sum = 0, temp;        
    printf("Enter a 3 digit number: ");        
    scanf("%d", &n); 
    temp = n;

    while(n != 0)
    {
        remainder = n % 10;
        sum = sum + (remainder*remainder*remainder);
        n = n/10;
    }       
    if(temp == sum)
    {
        printf("This numbber is an armstrong number");
    }
    else
    {
        printf("This number is not an armstrong number");
    }
    return 0;
}