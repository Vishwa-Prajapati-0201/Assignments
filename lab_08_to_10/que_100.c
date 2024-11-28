/*
A FILE CALLED “LNMIITSTUDENT.JAVA” CONTAINS INFORMATION SUCH AS STUDENT ROLL NUMBER,
NAME AND TOTAL MARKS. WRITE A C PROGRAM TO CREATE A FILE TO STORE DETAILS OF N
STUDENTS.
*/

#include <stdio.h>

typedef struct student_info
{
    int roll_number;
    char name[30];
    int marks;
} Student;

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    Student student[100];

    FILE *file;
    file = fopen("LNMIITSTUDENT.JAVA", "wb");

    for (int i = 0; i < n; i++)
    {
        printf("Enter details for student %d: \n", i + 1);

        printf("Roll number: ");
        scanf("%d", &student[i].roll_number);
        printf("Name: ");
        scanf(" %s", &student[i].name);
        printf("Total marks: ");
        scanf("%d", &student[i].marks);
    }
    fclose(file);

    FILE *text = fopen("LNMIITSTUDENT.JAVA", "rb");

    printf("\n--------Student Details-------------\n");
    printf("Roll No.\tName\t\tMarks\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\t\t%s\t\t%d\n", student[i].roll_number, student[i].name, student[i].marks);
    }
    printf("\n------------------------------------\n");
    fclose(text);

    return 0;
}