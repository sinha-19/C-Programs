//Write a C program that uses malloc to dynamically allocate an array of integers, inputs elements, and prints the sum.

#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, *arr, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory not allocated.\n");
        return 1;
    }
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum = %d\n", sum);
    free(arr);
    return 0;
}

