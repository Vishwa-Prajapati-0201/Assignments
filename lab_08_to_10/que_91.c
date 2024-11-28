// WRITE A PROGRAM TO CALCULATE THE SQUARE AND CUBE OF AN ENTERED NUMBER USING POINTER OF A VARIABLE CONTAINING THE ENTERED NUMBER.

#include <stdio.h>

int main()
{
    int n, square, cube;
    int *ptr = &n;
    printf("Enter a number: ");
    scanf("%d", &n);

    square = (*ptr) * (*ptr);
    cube = (*ptr) * (*ptr) * (*ptr);

    printf("Square of %d is %d\n", n, square);
    printf("Cube of %d is %d\n", n, cube);

    return 0;
}