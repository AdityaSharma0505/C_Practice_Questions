// Question 27 - Write a program of a Fibonacci series with recursion

#include <stdio.h>

void printFib(int n);
void fib(int n);

int prev1 = 1;
int prev2 = 0;

int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printFib(n);

    return 0;
}
void printFib(int n) {
    if(n < 1) {
        printf("Invalid number\n");
        return;
    }
    else if(n == 1) {
        printf("%d\n", 0);
        return;
    }
    else if(n == 2) {
        printf("%d\t%d\n", 0, 1);
        return;
    }
    else {
        printf("%d\t%d\t", 0, 1);
        fib(n);
    }
    return;
}
void fib(int n) {
    if(n < 3) {
        return;
    }
    int fn = prev1 + prev2;
    prev2 = prev1;
    prev1 = fn;
    printf("%d\t", fn);
    fib(n - 1);
    return;
}