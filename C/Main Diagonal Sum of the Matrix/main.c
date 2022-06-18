// Create a program to find the sum of the main diagonal of the matrix

#include <stdio.h>

int main() {
    int matrix[12][12];
    int i, j, rows, columns;
    int sum = 0;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &columns);
    printf("Enter the values of the matrix: ");

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matrix \n");

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%d \t", matrix[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            if (i == j) {
                sum = sum + matrix[i][j];
            }
        }
    }

    printf("The sum of diagonal elements of the matrix is %d.", sum);

    return 0;
}
