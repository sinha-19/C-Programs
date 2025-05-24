// Q: Write a C program to print all unique elements in an array.

#include <stdio.h>
int main() {
    int n, i, j, count;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Unique elements: ");
    for(i = 0; i < n; i++) {
        count = 0;
        for(j = 0; j < n; j++) {
            if(i != j && arr[i] == arr[j]) {
                count = 1;
                break;
            }
        }
        if(count == 0)
            printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

