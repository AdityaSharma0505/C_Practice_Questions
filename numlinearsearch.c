// Question 21 - Write a program in linier search with integer number, character number

#include <stdio.h>

int linearSearch(int arr[], int length, int target);

int main() {
    int result = 0;
    int arr[] = {2, 3, 8, 10, 11, 7, 5};

    int length = sizeof(arr) / sizeof(arr[0]);
    int charLength = 6;

    int target = 8;

    result = linearSearch(arr, length, target);

    if(result == -1) {
        printf("Element not found\n");
    }
    else {
        printf("Element found at index : %d\n", result);
    }

    return 0;
    
}

int linearSearch(int arr[], int length, int target) {
    for(int i = 0; i < length; i++) {
        if(arr[i] == target) {
            return i;  // Element found at index i
        }
    }
    return -1;  // Element not found
}