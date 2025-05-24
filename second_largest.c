//Write a C program to find the second largest element in an array.

#include <stdio.h>
#include <limits.h>
int main() {
    int n, i;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    int max = INT_MIN, second = INT_MIN;
    for(i = 0; i < n; i++) {
        if(arr[i] > max) {
            second = max;
            max = arr[i];
        } else if(arr[i] > second && arr[i] < max) {
            second = arr[i];
        }
    }
    if(second == INT_MIN)
        printf("No second largest found.\n");
    else
        printf("Second largest: %d\n", second);
    return 0;
}

