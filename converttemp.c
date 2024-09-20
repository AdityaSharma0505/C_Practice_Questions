// Question 3 - Write a program to conversion of temperature centigrade to Fahrenheit and vice versa

#include <stdio.h>

void function1(float centigrade);

void function2(float fahrenheit);

int main() {
    int num;
    float centigrade, fahrenheit;
    printf("Please select any one of the following : 1 for centigrade to fahrenheit or 2 for fahrenheit to centigrade \n");
    scanf("%d", &num);

    if(num == 1) {
        printf("Enter the temperature in centigrade : \n");
        scanf("%f", &centigrade);
        function1(centigrade);
    }
    else if(num == 2) {
        printf("Enter the temperature in fahrenheit : \n");
        scanf("%f", &fahrenheit);
        function2(fahrenheit);
    }
    else {
        printf("Invalid input \n");
    }

    return 0;
}

void function1(float centigrade) {
    float value;

    value = ((centigrade * (9.0 / 5.0) ) + 32);
    printf("The value of temperature in fahrenheit is : %f \n", value);

}

void function2(float fahrenheit) {
    float value;

    value = (fahrenheit - 32) * (5.0 / 9.0);
    printf("The value of the temperature in centigrade is : %f \n", value);

}