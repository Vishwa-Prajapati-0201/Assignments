// WRITE A FUNCTION EXCHANGE TO INTERCHANGE THE VALUE OF TWO VARIALBLE ,SAY X AND Y.

#include <stdio.h>

void exchange(int x, int y);
void exchange(int x, int y)
{
    int swap;
    swap = x;
    x = y;
    y = swap;

    printf("x = %d & y = %d", x, y);
}

int main()
{
    int x, y;
    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter y: ");
    scanf("%d", &y);

    exchange(x, y);

    return 0;
}