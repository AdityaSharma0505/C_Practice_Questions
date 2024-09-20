// Question 21 - Write a program in linier search with integer number, character number

#include <stdio.h>
#include <string.h>

int linearSearch(char *arr, int length, char target);

int main() {
    int result;
    char arr[] = {'A', 'B', 'C', 'D', 'E', 'F'};

    int length = sizeof(arr) / sizeof(arr[0]);

    char target = 'B';

    result = linearSearch(arr, length, target);

    if(result == -1) {
        printf("Element not found\n");
    }
    else {
        printf("Element found at index : %d\n", result);
    }

    return 0;
    
}

int linearSearch(char *arr, int length,char target) {
    for(int i = 0; i < length; i++) {
        if(arr[i] == target) {
            return i;  // Element found at index i
        }
    }
    return -1;  // Element not found
}