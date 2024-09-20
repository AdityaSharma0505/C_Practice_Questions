// Question 30 - Write a menu driven program to make a calculator

#include <stdio.h>

void addition();
void subtraction();
void multiplication();
void division();

int main() {
    int choice;
    printf("Select an option :\n1) - Addition\n2) - Subtraction\n3) - Multiplication\n4) - Division\n");
    scanf("%d", &choice);
    if(choice == 1) {
        addition();
    }
    else if(choice == 2) {
        subtraction();
    }
    else if(choice == 3) {
        multiplication();
    }
    else if(choice == 4) {
        division();
    }
    else {
        printf("Invalid choice\n");
    }

    return 0;
}
void addition() {
    int a, b;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    printf("The addition of the numbers %d and %d is : %d\n", a, b, (a + b));
    return;
}
void subtraction() {
    int a, b;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    printf("The subtraction of the numbers %d and %d is : %d\n", a, b, (a - b));
    return;
}
void multiplication() {
    int a, b;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    printf("The multiplication of the numbers %d and %d is : %d\n", a, b, (a * b));
    return;
}
void division() {
    float a, b;
    printf("Enter the first number : ");
    scanf("%f", &a);
    printf("Enter the second number : ");
    scanf("%f", &b);
    printf("The division of the numbers %f and %f is : %f\n", a, b, (a / b));
    return;
}