// PROGRAM TO CHECK WHETHER A NO IS PRIME OR NOT.

#include <stdio.h>
int main()
{
    int n;
    int flag = 1;
    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 2; i < n; i++)
    {
        if(n%i == 0)
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
    {
        printf("This is a prime number");
    }
    else
    {
        printf("This is not a prime number");
    }

    return 0;
}