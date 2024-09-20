// Question 1 - Write a program to inter change of values of two variable using third variable

#include <stdio.h>

void swap(int a, int b);

int main() {
    int n1, n2;
    printf("Enter the first number : \n");
    scanf("%d", &n1);
    printf("Enter the second number : \n");
    scanf("%d", &n2);

    printf("The numbers before swap are : \n");
    printf("First number = %d \n", n1);
    printf("Second number = %d \n", n2);

    swap(n1, n2);

    return 0;

}

void swap(int a, int b) {
    int t = a;
    a = b;
    b = t;
    printf("The numbers after swap are : \n");
    printf("First number = %d \n", a);
    printf("Second number = %d \n", b);
}