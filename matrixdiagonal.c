// Question 20 - Write a program taking a matrix print only the diagonals

#include <stdio.h>
int main() {
    int rows = 0;
    int cols = 0;

    printf("Enter the number of rows in your matrix : ");
    scanf("%d", &rows);
    printf("Enter the number of columns in your matrix : ");
    scanf("%d", &cols);

    int matrix [rows][cols];

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Enter the element of row number %d and column number %d : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The diagonal elements are : \n");

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(i == j) {
                printf("%d\t", matrix[i][j]);
            }
            else {
                printf("\t");
            }
        }
        printf("\n");
    }

    return 0;
}