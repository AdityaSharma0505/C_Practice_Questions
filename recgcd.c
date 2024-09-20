// Question 28 - Write a program to find GCD with recursion

#include <stdio.h>

int gcd(int x, int y);

int main() {
    int a, b, GCD;
    printf("Enter two positive numbers : ");
    scanf("%d %d", &a, &b);
    GCD = gcd(a, b);

    printf("The GCD of %d and %d is : %d\n", a, b, GCD);

    return 0;
}
int gcd(int x, int y) {
    while(x != y) {
        if(x > y) {
            return gcd(x - y, y);
        }
        else {
            return gcd(x, y - x);
        }
    }
    return x;
}