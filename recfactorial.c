// Question 26 - Write a program to calculate factorial with recursion

#include <stdio.h>

int factorial(int num);

int main() {
    int num, fact;
    printf("Enter the number to calculate factorial : ");
    scanf("%d", &num);

    fact = factorial(num);

    printf("The factorial value of the number %d is : %d\n", num, fact);

    return 0;
}

int factorial(int num) {
    int fact = 1;
    if(num == 1) {
        return 1;
    }
    else {
        fact *= num * factorial(num - 1);
    }
    return fact;
}