// program to swap two variables using third variable

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter a\n");
    scanf("%d", &a);
    printf("Enter b\n");
    scanf("%d", &b);

    c = b;
    b = a;
    a = c;
    printf("After swaping a = %d & b = %d", a, b);

    return 0;
}