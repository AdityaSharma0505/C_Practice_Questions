// Question 19 - Write a program Matrix row wise sum, column wise sum and diagonal sum

#include <stdio.h>
int main() {
    int rows = 0;
    int cols = 0;
    int choice;

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

    printf("Your matrix is : \n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Enter '1' for row wise sum, '2' for column sum, and '3' for diagonal sum : ");
    scanf("%d", &choice);

    if(choice == 1) {
        int rowsum[rows];

        for(int i = 0; i < rows; i++) {
            int rowsumvalue = 0;
            for(int j = 0; j < cols; j++) {
                rowsumvalue += matrix[i][j];
            }
            printf("The sum of the elements of row %d is : %d\n", i, rowsumvalue);
        }
    }
    else if(choice == 2) {
        int columnsum[cols];

        for(int i = 0; i < cols; i++) {
            int columnsumvalue = 0;
            for(int j = 0; j < rows; j++) {
                columnsumvalue += matrix[j][i];
            }
            printf("The sum of the elements of column %d is : %d\n", i, columnsumvalue);
        }
    }
    else if(choice == 3) {
        if(rows != cols) {
            printf("It should be a square matrix\n");
        }
        else {
        int diagonalsum = 0;
        for(int i = 0; i < rows; i++) {
            diagonalsum += matrix[i][i];
        }
        printf("The diagonal sum is : %d\n", diagonalsum);
        }
    }
    else {
        printf("Please select a valid option\n");
    }

    return 0;
}