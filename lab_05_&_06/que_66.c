// PROGRAM TO READ A 3*3 MATRIX AND ADD THEIR VALUE AND STORE THEM IN THIRD MATRIX.

#include <stdio.h>

void read_matrix(int matrix[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("Enter [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

int main()
{
    int matrix_1[3][3], matrix_2[3][3], matrix_3[3][3];

    read_matrix(matrix_1[3][3]);
    read_matrix(matrix_2[3][3]);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; i++)
        {
             matrix_3[i][j] = matrix_1[i][j] + matrix_2[i][j];
        }
    }
    
    printf("\nThird matrix: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix_3[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}