#include <stdio.h>

int main() {
    int a[3][3];

    // Reading the 3x3 matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter the element of %d row and %d column: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Transpose of the matrix:\n");

    // Printing the transpose of the matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}
