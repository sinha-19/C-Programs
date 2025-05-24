//Write a C program for a simple calculator using switch-case.

#include <stdio.h>
int main() {
    int a, b, choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Menu:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1: printf("Result = %d\n", a + b); break;
        case 2: printf("Result = %d\n", a - b); break;
        case 3: printf("Result = %d\n", a * b); break;
        case 4: 
            if (b != 0)
                printf("Result = %d\n", a / b);
            else
                printf("Cannot divide by zero\n");
            break;
        default: printf("Invalid choice\n");
    }
    return 0;
}

