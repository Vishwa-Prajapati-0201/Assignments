// program to calculate simple interest

#include<stdio.h>

int main()
{
    float p,r,t;

    printf("Enter p\n");
    scanf("%f", &p);

    printf("Enter r\n");
    scanf("%f", &r);

    printf("Enter t\n");
    scanf("%f", &t);

    float s = (p*r*t)/100;

    printf("The simple interest is %f", s);
        
    return 0;
}