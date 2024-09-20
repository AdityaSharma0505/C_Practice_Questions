// Question 11 - Write a program to calculate factorial of a number

#include <stdio.h>
int main() {
    int num, value;

    printf("Enter the number you want to calculate the factorial value of : \n");
    scanf("%d", &num);

    value = num;

    for (int i = 1; i < num; i++) {
        value *= i;
    }

    printf("The factorial value of the number %d is %d\n", num, value);

    return 0;
}