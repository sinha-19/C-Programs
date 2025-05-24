// Q25: Write a C program to rotate an array by one to the left.

#include <stdio.h>
int main() {
    int n, i, first;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: ");
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    first = arr[0];
    for(i = 0; i < n - 1; i++) arr[i] = arr[i + 1];
    arr[n - 1] = first;
    printf("Array after left rotation: ");
    for(i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}

