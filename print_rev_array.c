//Write a C program to print an array in reverse order without modifying the original array.

#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Reversed output: ");
    for(int i = n - 1; i >= 0; i--) printf("%d ", arr[i]);
    return 0;
}

