// Question 10 - Write a program to find the number is prime or not

#include <stdio.h>
int main() {
    int num, count = 0;
    printf("Enter the number you want to check whether it is prime or not : \n");
    scanf("%d", &num);

    for(int i = 2; i <= (num / 2); i++) {
        if(num % i == 0) 
            count += 1;
    }

    if(count >= 1) 
        printf("The number is not a prime number\n");
    else
        printf("The number is a prime number\n");

    return 0;
}