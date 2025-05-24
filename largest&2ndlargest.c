// Q: Write a C program to find the largest and second largest element in an array.

#include <stdio.h>
int main() {
    int n, i, first, second;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    first = second = -2147483648;
    for(i = 0; i < n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        } else if(arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    printf("Largest = %d\n", first);
    if(second != -2147483648)
        printf("Second Largest = %d\n", second);
    else
        printf("No second largest (all elements equal?)\n");
    return 0;
}

