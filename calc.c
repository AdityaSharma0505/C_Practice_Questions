// Question 29 - Write a menu driven program to judge a given number even or odd, prime or not and its factorial value

#include <stdio.h>

void isEvenOdd(int num);
void isPrime(int num);
int factorial(int num);

int main() {
    int num, choice, fact;
    printf("Enter the number : ");
    scanf("%d", &num);
    printf("Select an option :\n1) - Even or Odd\n2) - Prime or not\n3) - Factorial value\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1 : 
            isEvenOdd(num);
            break;
        case 2 : 
            isPrime(num);
            break;
        case 3 : 
            fact = factorial(num);
            printf("The factorial value of the number is : %d\n", fact);
            break;
        default :
            printf("Wrong Choice\n");
    }

    return 0;
}
void isEvenOdd(int num) {
    if(num % 2 == 0) {
        printf("The number is Even\n");
        return;
    }
    else 
        printf("The number is Odd\n");
        return;
}
void isPrime(int num) {
    int count = 0;
    for(int i = 2; i <= (num / 2); i++) {
        if(num % i == 0) {
            count++;
        }
    }
    if(count >= 1) {
        printf("The number is not a Prime number\n");
    }
    else {
        printf("The number is a Prime number\n");
    }
    return;
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