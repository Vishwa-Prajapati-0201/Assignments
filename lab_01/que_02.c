// program to read marks of five subject of a student and calculate total marks and percentage

#include <stdio.h>

int main()
{
    float a,b,c,d,e;
    printf("Enter the marks of subject a,b,c,d and e\n");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);

    float total = a+b+c+d+e;
    printf("Total marks = %f\n", total);

    float percentage = total/5;
    printf("Percentage = %f\n", percentage);

    return 0;
}