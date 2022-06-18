// Write a program that finds the smallest value, the largest one and the average of the matrix

#include <stdio.h>

int main() {
    int matrix[50][50];
    int i, j, rows, columns, minimum, maximum, average;
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

    maximum = matrix[0][0];
    minimum = matrix[0][0];

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            if (matrix[i][j] > maximum)
                maximum = matrix[i][j];
            else if (matrix[i][j] > minimum)
                minimum = matrix[i][j];
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            sum = sum + matrix[i][j];
        }
    }

    average = sum / (rows * columns);

    printf("The smallest value is %d, the largest value is %d and the average is %d.", minimum, maximum, average);

    return 0;
}
