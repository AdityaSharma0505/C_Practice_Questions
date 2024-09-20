// Question 7 - Write a program taking the subject marks of six different subject and calculate the total marks and
// generate the grade with percentage of marks

#include <stdio.h>
int main() {
    int marks[6];
    int totalmarks = 0;
    int percentage;

    for(int i = 0; i <= 5; i++) {
        printf("Enter the marks : \n");
        scanf("%d", &marks[i]);
        totalmarks += marks[i];
    }

    printf("Total marks : %d \n", totalmarks);
    
    percentage = (totalmarks / 6);
    
    printf("Total percentage of marks : %d \n", percentage);

    if(percentage > 90 && percentage <= 100) 
        printf("Grade : A++\n");
    else if(percentage > 80 && percentage <= 90) 
        printf("Grade : A\n");
    else if(percentage > 60 && percentage <= 80)
        printf("Grade : B\n");
    else if(percentage > 40 && percentage <= 60) 
        printf("Grade : C\n");
    else 
        printf("Fail\n");

    return 0;

}