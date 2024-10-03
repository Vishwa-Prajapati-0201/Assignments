// READ A NUMBER N AND PRINT IF N IS PRIME OR COMPOSITE.

#include <stdio.h>
int main()
{
    int n;
    int flag = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 2; i < n; i++)
    {
        if(n%i == 0)
        {
            flag = 0;
        }
        break;
    }
    if(flag == 1)
    {
        printf("This number is a prime number");
    }
    else
    {
        printf("This number is a composite number");
    }
    
    return 0;
}