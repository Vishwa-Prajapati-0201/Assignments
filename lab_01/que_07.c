// program to calculate area of triangle

#include <stdio.h>

int main()
{
    float b, h, area;
    printf("Enter the base of triangle\n");
    scanf("%f", &b);
    printf("Enter the height of triangle\n");
    scanf("%f", &h);

    area = (1.0/2) * b * h;
    printf("The area of triangle is %f", area);

    return 0;
}