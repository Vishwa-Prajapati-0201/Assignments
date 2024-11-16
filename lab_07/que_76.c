// WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS EVEN OR ODD.

#include <stdio.h>

void func(int a);
void func(int a)
{
    if (a % 2 == 0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }
}

int main()
{
    int a;
    printf("Enter a: ");
    scanf("%d", &a);

    func(a);

    return 0;
}