// Question 12 - Write a program to sum of all even and odd numbers within a range and their difference and sum

#include <stdio.h>
int main() {
    int num, even_sum = 0, odd_sum = 0;
    printf("Enter the number : ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++) {
        if(i % 2 == 0) {
            even_sum += i;
        }
        else {
            odd_sum += i;
        }
    }

    printf("The sum of all the even numbers from 1 to %d is : %d\n", num, even_sum);
    printf("The sum of all the odd numbers from 1 to %d is : %d\n", num, odd_sum);

    printf("The difference of them is : %d\n", (even_sum - odd_sum));
    printf("The sum of them is : %d\n", (even_sum + odd_sum));

    return 0;
}