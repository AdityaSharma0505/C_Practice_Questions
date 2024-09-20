// Question 6 - Write a program to calculate given number is even or odd

#include <stdio.h>
int main() {
    int number;
    printf("Enter a number to check if it is even or odd : \n");
    scanf("%d", &number);

    if((number % 2) == 0) {
        printf("%d is even \n", number);
    }
    else {
        printf("%d is odd \n", number);
    }

    return 0;
}