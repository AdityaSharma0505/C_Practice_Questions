// Question 18 - Write program for addition, Subtraction and multiplication in a matrix

#include <stdio.h>
int main() {
    int rows1 = 0;
    int cols1 = 0;
    int rows2 = 0;
    int cols2 = 0;
    int choice;

    printf("Enter the number of rows in your first matrix : ");
    scanf("%d", &rows1);
    printf("Enter the number of columns in your first matrix : ");
    scanf("%d", &cols1);

    int matrix1 [rows1][cols1];

    for(int i = 0; i < rows1; i++) {
        for(int j = 0; j < cols1; j++) {
            printf("Enter the element of row number %d and column number %d : ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the number of rows in your second matrix : ");
    scanf("%d", &rows2);
    printf("Enter the number of columns in your second matrix : ");
    scanf("%d", &cols2);

    int matrix2 [rows2][cols2];

    for(int i = 0; i < rows2; i++) {
        for(int j = 0; j < cols2; j++) {
            printf("Enter the element of row number %d and column number %d : ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("Your first matrix is : \n");
    for(int i = 0; i < rows1; i++) {
        for(int j = 0; j < cols1; j++) {
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }
    
    printf("Your second matrix is : \n");
    for(int i = 0; i < rows2; i++) {
        for(int j = 0; j < cols2; j++) {
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }

    int result[rows1][cols2];

    printf("Enter '1' for addition, '2' for subtraction, and '3' for multiplication of matrices : ");
    scanf("%d", &choice);

    if (choice == 1) {
        for(int i = 0; i < rows1; i++) {
            for(int j = 0; j < cols1; j++) {
                matrix1[i][j] += matrix2[i][j];
            }
        }
        printf("The new matrix is : \n");
        for(int i = 0; i < rows1; i++) {
            for(int j = 0; j < cols1; j++) {
                printf("%d\t", matrix1[i][j]);
            }
            printf("\n");
        }
    }
    else if (choice == 2) {
        for(int i = 0; i < rows1; i++) {
            for(int j = 0; j < cols1; j++) {
                matrix1[i][j] -= matrix2[i][j];
            }
        }
        printf("The new matrix is : \n");
        for(int i = 0; i < rows1; i++) {
            for(int j = 0; j < cols1; j++) {
                printf("%d\t", matrix1[i][j]);
            }
            printf("\n");
        }
    }
    else if (choice == 3) {
        for(int i = 0; i < rows1; i++) {
            for(int j = 0; j < cols2; j++) {
                result[i][j] = 0;
            }
        }

        for(int i = 0; i < rows1; i++) {
            for(int j = 0; j < cols2; j++) {
                for(int k = 0; k < cols1; k++) {
                    result[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }
        
        printf("The new matrix is : \n");
        for(int i = 0; i < rows1; i++) {
            for(int j = 0; j < cols2; j++) {
                printf("%d\t", result[i][j]);
            }
            printf("\n");
    }
    }
    else {
        printf("Please select a valid option\n");
    }

    return 0;
}