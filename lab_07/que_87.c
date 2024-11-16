/*
WRITE A PROGRAM TO READ INFORMATION OF 10 STUDENT AND DISPLAY THE INFORMATION OF THOSE STUDENT WHOSE MARKS ARE GREATHER THAN 500.
(PASSING ARRAY OF STRUCTURE INTO FUNCTION).
*/

#include <stdio.h>

struct student
{
    char student_name[30];
    int roll_no;
    int marks;
};
    struct student sa[10];

void read_student_information(int i);
void read_student_information(int i)
{
    printf("Enter student name: ");
    scanf("%s", &sa[i].student_name);

    printf("Enter roll number: ");
    scanf("%d", &sa[i].roll_no);

    printf("Enter the marks of a student: ");
    scanf("%d", &sa[i].marks);
}

void display_student_information(int i);
void display_student_information(int i)
{
    printf("Name of the student is %s\n", sa[i].student_name);
    printf("Roll number of student is %d\n", sa[i].roll_no);
    printf("Marks of student is %d\n", sa[i].marks);
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        read_student_information(i);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        if (sa[i].marks >= 500)
        {
            display_student_information(i);
        }
    }
    

    return 0;
}