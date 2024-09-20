// Question 15 - Write a program to check a number is Harshad or not

#include <stdio.h>
int main() {
    int originalNum, num, sum, remainder;
    
    printf("Enter the number : \n");
    scanf("%d", &originalNum);

    num = originalNum;
    sum = 0;

    while (num != 0){
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }

    if(originalNum % sum == 0) {
        printf("%d is a harshad number\n", originalNum);
    }
    else {
        printf("%d is not a harshad number\n", originalNum);
    }

    return 0;
}