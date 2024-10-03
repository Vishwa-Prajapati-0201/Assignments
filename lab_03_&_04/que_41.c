// READ A NUMBER N AND PRINT FACTOR OF N.(EX 28= 1,2,4,7,14,28)

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("1 ");
    
    for(int i = 2; i <= n; i++)
    {
        if(n%i == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}