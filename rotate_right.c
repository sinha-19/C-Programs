// Q24: Write a C program to rotate an array by one to the right.

#include <stdio.h>
int main() {
    int n, i, last;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: ");
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    last = arr[n - 1];
    for(i = n - 1; i > 0; i--) arr[i] = arr[i - 1];
    arr[0] = last;
    printf("Array after right rotation: ");
    for(i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}

