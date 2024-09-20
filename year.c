// Question 8 - Write a program to determine leap year or not. And also comment on centurion year

#include <stdio.h>
int main() {
    int year;

    printf("Enter the year to want to check : \n");
    scanf("%d", &year);

    if(year % 4 == 0) {
        if(year % 100 == 0) {
            printf("%d is both a centurian and a leap year\n", year);
        }
        else 
            printf("%d is a leap year but not a centurian year\n", year);
    }
    else {
        if(year % 100 == 0) {
            printf("%d is a centurian year but not a leap year\n", year);
        }
        else 
            printf("%d is neither a leap year nor a centurian year\n", year);
    }

    return 0;
}