// program to swap two variables without using third variable

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a\n");
    scanf("%d", &a);
    printf("Enter b\n");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swaping a = %d & b = %d ", a, b);
    return 0;
}