//program to calculate gross salary

#include <stdio.h>

int main()
{
    float basic_salary, hra, da, gross_salary;
    
    printf("Enter basic salary\n");
    scanf("%f", &basic_salary);

    printf("Enter house rent allowance\n");
    scanf("%f", &hra);

    printf("Enter dearness allowance\n");
    scanf("%f", &da);

    gross_salary = basic_salary + hra + da;
    printf("The gross salary is %.2f\n", gross_salary);

    return 0;
}