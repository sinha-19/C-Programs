//Write a C program to find the missing number in an array of size N-1 containing numbers from 1 to N.

#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter value of N: ");
    scanf("%d", &n);
    int arr[n - 1];
    printf("Enter %d elements: ", n - 1);
    for(int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    int total = n * (n + 1) / 2;
    printf("Missing number: %d\n", total - sum);
    return 0;
}

