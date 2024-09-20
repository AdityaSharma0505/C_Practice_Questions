// Question 24 - Write a program to print a character array in reverse order

#include <stdio.h>
#include <string.h>

int main() {
    char arr[] = "TOMATO";
    int n = strlen(arr);

    for(int i = n - 1; i >= 0; i--) {
        printf("%c", arr[i]);
    }
    printf("\n");

    return 0;
}