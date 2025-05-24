// Write a C program to move all zeroes in an array to the end while maintaining the order of non-zero elements.

#include <stdio.h>
int main() {
    int n, j = 0;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0)
            arr[j++] = arr[i];
    }
    while(j < n) arr[j++] = 0;
    printf("Array after moving zeroes: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}

