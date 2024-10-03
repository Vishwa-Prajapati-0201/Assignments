/*
READ NUMBERS TILL A NEGATIVE NUMBER IS ENTERED AND
CALCULATE SUM OF A LIST OF NUMBERS READ.
*/

#include<stdio.h>
int main ()
{   
    int n;
    int sum = 0;

    for(int i =1; ; i++) 
    {   
        printf("Enter the number: ");
        scanf("%d",&n);
        
        if(n >= 0)
        {   
        sum = sum +n;
        }
        else
        {
            break;
        }
    }

    printf("%d is the sum of entered positive numbers",sum);
    return 0;
}