// PROGRAM TO READ TWO NOS. AND PERFORM SPECIFIC TASK (USING ARITHMETIC OPERATOR)AND THIS PERFORM USING SWITCH-CASE(CASE IN CHAR FORM)

#include <stdio.h>

int main()
{
    float a, b;
    char c;

    printf("Enter a and b: ");
    scanf("%f %f", &a, &b);

    printf("Enter operator: ");
    scanf(" %c", &c);

    switch (c)
    {
    case '+':
        printf("%.2f\n", a + b);
        break;
    case '-':
        printf("%.2f\n", a - b);
        break;
    case '*':
        printf("%.2f\n", a * b);
        break;
    case '/':
        if (b != 0)
        {
            printf("%.2f\n", a / b);
        }
        else
        {
            printf("Error: Division by zero\n");
        }
        break;
    default:
        printf("Error: Invalid operator\n");
        break;
    }

    return 0;
}
