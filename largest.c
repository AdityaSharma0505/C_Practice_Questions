// Question 9 - Write a program to find biggest and smallest number among three numbers

#include <stdio.h>

int large(int a, int b, int c);

int small(int a, int b, int c);

int main() {
    int a, b, c, largest, smallest;

    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    printf("Enter the third number : ");
    scanf("%d", &c);

    largest = large(a, b, c);
    smallest = small(a, b, c);

    printf("The largest number among these is %d\n", largest);
    printf("The smallest number among these is %d\n", smallest);

    return 0;
}

int large(int a, int b, int c) {
    if (a > b) {
        if(a > c) {
            return a;
        }
        else {
            return c;
        }
    }
    else {
        if(b > c) {
            return b;
        }
        else {
            return c;
        }
    }
}

int small(int a, int b, int c) {
    if (a < b) {
        if(a < c) {
            return a;
        }
        else {
            return c;
        }
    }
    else {
        if(b < c) {
            return b;
        }
        else {
            return c;
        }
    }
}