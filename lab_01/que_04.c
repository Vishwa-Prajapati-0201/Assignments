// program to convert temperature from fahrenheit to centigrade degrees

#include <stdio.h>

int main()
{
    float C, F;
    printf("Enter the temperature in Fahrenheit\n");
    scanf("%f", &F);

    C = ((float)5/9)*(F - 32);
    printf("The temperature in celsius is %f\n", C);
    return 0;
}