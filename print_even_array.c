// Write a C program to print all even numbers in an array.

#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Even elements: ");
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }
    return 0;
}

