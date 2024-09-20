// Question 13 - Write a program to print the prime number within a range

#include <stdio.h>
int main() {
    int num;

    printf("Enter the number upto which you want the prime numbers : \n");
    scanf("%d", &num);

    for(int i = 2; i <= num; i++) {
        int is_prime = 1;
        for(int j = 2; j <= (i / 2); j++) {
            if(i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        if(is_prime) {
            printf("%d\t", i);
        }
    }

    return 0;
}