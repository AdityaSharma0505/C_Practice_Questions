// Question 4 - Write a program to create a five digit integer number and print its reverse number

#include <stdio.h>
int main() {
    int num, revnum;

    printf("Enter a five digit number to obtain its reverse number : \n");
    scanf("%d", &num);

    for(int i = 0; i <= 4; i++) {
        revnum = (num % 10);
        printf("%d", revnum);
        num  = num / 10;

    }

    return 0;
}