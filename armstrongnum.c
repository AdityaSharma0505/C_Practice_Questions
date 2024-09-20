// Question 14 - Write a program to check a number is Armstrong or not

#include <stdio.h>
int main() {
    int originalNum, num, remainder, result = 0;

    printf("Enter the three - digit number : \n");
    scanf("%d", &originalNum);

    num = originalNum;

    while (num != 0) {
        remainder = num % 10;
        result += (remainder * remainder * remainder);
        num  /= 10;
    }

    if (result == originalNum) {
        printf("%d is an armstrong number\n", originalNum);
    }
    else {
        printf("%d is not an armstrong number\n", originalNum);
    }

    return 0;
}