// Write a C program to demonstrate pointer arithmetic with an integer array.

#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    for (int i = 0; i < 5; i++) {
        printf("Element %d = %d (Address: %p)\n", i, *(ptr + i), (ptr + i));
    }
    return 0;
}

