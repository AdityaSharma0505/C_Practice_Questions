// Question 25 - Write a program to show the utility user define function

#include <stdio.h>

int sumfunction(int a, int b);

int main() {
    int a, b;
    int sum;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    sum = sumfunction(a, b);
    printf("The sum of the numbers %d and %d is : %d\n", a, b, sum);

    return 0;
}

int sumfunction(int a, int b) {
    int sum;
    sum = a + b;
    return sum;
}