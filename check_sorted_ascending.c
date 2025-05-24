//Write a C program to check if an array is sorted in ascending order.

#include <stdio.h>
int main() {
    int n, i, sorted = 1;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: ");
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    for(i = 1; i < n; i++) {
        if(arr[i] < arr[i - 1]) {
            sorted = 0;
            break;
        }
    }
    if(sorted)
        printf("Array is sorted in ascending order.\n");
    else
        printf("Array is not sorted.\n");
    return 0;
}

