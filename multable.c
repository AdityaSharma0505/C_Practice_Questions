// Question 17 - Write a program to print a multiplication table

#include <stdio.h>
int main() {
    printf("The multiplication table of all the numbers from 1 to 10 are coming : \n");
    printf("\n");

    for(int i = 1; i <= 10; i++) {
        printf("This the multiplication table of %d : \n", i);
        for(int j = 1; j <= 10; j++) {
            printf("%d * %d = %d\n", i, j, (i * j));
        }
    }

    return 0;
}