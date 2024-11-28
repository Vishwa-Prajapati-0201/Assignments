/*
WRITE A C PROGRAM TO DECLARE A STRUCTURE WITH DATA MEMBERS EMPLOYEE NUMBER,
EMPLOYEE NAME AND BASIC PAY OF THE EMPLOYEE. DECLARE A STRUCTURE POINTER AND AN
ARRAY EMPLOY WITH 50 ELEMENTS .THE PROGRAM SHOULD READ ‘N’ EMPLOYEE DETAILS AND
PRINT THE LIST OF ALL EMPLOYEE ALONG WITH THE BASIC A PAY.
*/

#include <stdio.h>

typedef struct employee
{
    int emp_no;
    char emp_name[30];
    int basic_pay;
}emp;

int main()
{
    emp *ptr;
    emp employee[50];

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the number of employee: ");
        scanf("%d", &employee[i].emp_no);
        printf("Enter the name of employee: ");
        scanf("%s", &employee[i].emp_name);
        printf("Enter the basic pay of employee: ");
        scanf("%d", &employee[i].basic_pay);
    }

    for (int i = 0; i < n; i++)
    {
        printf("Number of Employee is %d\n", employee[i].emp_no);
        printf("Number of Employee is %s\n", employee[i].emp_name);
        printf("Basic pay of Employee is %d\n", employee[i].basic_pay);
    }
    
    return 0;
}