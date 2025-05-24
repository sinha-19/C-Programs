//Write a C program using calloc to dynamically allocate and initialize an array of integers, then print all elements.

#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, *arr;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    arr = (int *)calloc(n, sizeof(int));
    if (arr == NULL) {
        printf("Memory not allocated.\n");
        return 1;
    }
    printf("Array initialized to zero:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}

