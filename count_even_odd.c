// Q26: Write a C program to count even and odd numbers in an array.

#include <stdio.h>
int main() {
    int n, i, even = 0, odd = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0) even++;
        else odd++;
    }
    printf("Even count = %d\nOdd count = %d\n", even, odd);
    return 0;
}

