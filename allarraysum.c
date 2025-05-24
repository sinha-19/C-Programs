// Q: Write a C program to calculate the sum of all elements in an array.

#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum of array = %d\n", sum);
    return 0;
}

