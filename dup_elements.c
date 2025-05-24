// Q21: Write a C program to print all duplicate elements in an array.

#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Duplicate elements: ");
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
    printf("\n");
    return 0;
}

