#include <stdio.h>

// Function for matrix input from the user
int inputMatrix(int matrix[10][10], int rows, int cols) {
    printf("Enter elements for a %dx%d matrix:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function for display a matrix
int displayMatrix(int matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to multiply two matrices
int multiplyMatrices(int matrix1[10][10], int matrix2[10][10], int result[10][10], int rows1, int cols1, int rows2, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int rows1, cols1, rows2, cols2;
    int matrix1[10][10], matrix2[10][10], result[10][10];

    printf("-------------------Matrix Multiplication-------------------\n");
    // Input row and col for the first matrix
    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &cols1);

    // Input row and col for the second matrix
    printf("Enter the number of rows for the second matrix: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &cols2);

    //check matrix for multiplication....
    if (cols1 != rows2) {
        printf("Error: Row and Col is not equal...\n");
        return 1;
    }

    // Input matrices nd display matrix1...
    printf("Matrix 1:\n");
    inputMatrix(matrix1, rows1, cols1);
    
    // Input matrices nd display matrix2...
    printf("Matrix 2:\n");
    inputMatrix(matrix2, rows2, cols2);

    //Display matrix1 and matrix2.....
    printf("Matrix 1:\n");
    displayMatrix(matrix1, rows1, cols1);
    printf("\n");
    printf("Matrix 2:\n");
    displayMatrix(matrix2, rows2, cols2);

    printf("\n");
    // Multiply matrices....
    multiplyMatrices(matrix1, matrix2, result, rows1, cols1, rows2, cols2);

    // Display result
    printf("Result: Multiplication Matrix\n");
    displayMatrix(result, rows1, cols2);

    return 0;
}