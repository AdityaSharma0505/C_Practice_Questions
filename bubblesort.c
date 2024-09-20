// Question 22 - Write a program in bubble sort and selection sort
// Bubble Sort

#include <stdio.h>

void bubbleSort(int arr[], int n);
void printarr(int arr[], int n);

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("The sorted array is : \n");
    printarr(arr, n);

    return 0;
}

void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printarr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
}