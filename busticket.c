// Question 5 - Using scanf function print a ticket of a bus. Taking all the details

#include <stdio.h>
int main() {
    char name[20];
    int age, time, arrtime;


    printf("Enter your name : \n");
    scanf("%[^\n]%*c", &name);

    printf("Enter your age : \n");
    scanf("%d", &age);

    printf("Enter the time you want to departure : \n");
    scanf("%d", &time);

    arrtime = time + 4;

    printf("Here is your ticket : \n");
    printf("\nShubh Volvo Bus Services Pvt. Ltd. \n");
    printf("Details : \n");
    printf("\nName : %s             ", name);
    printf("Age : %d \n", age);
    printf("\nDeparture Time : %d : 00 \n", time);
    printf("\nArrival Time : %d : 00 \n", arrtime);
    printf("\nHappy Journey! \n");

    return 0;

}