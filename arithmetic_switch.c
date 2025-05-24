//Write a C program to perform arithmetic operations (+, -, *, /) using switch-case.

#include <stdio.h>
int main() {
    char op;
    float a, b;
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two operands: ");
    scanf("%f %f", &a, &b);
    switch (op) {
        case '+': printf("Result = %.2f\n", a + b); break;
        case '-': printf("Result = %.2f\n", a - b); break;
        case '*': printf("Result = %.2f\n", a * b); break;
        case '/': 
            if (b != 0)
                printf("Result = %.2f\n", a / b);
            else
                printf("Division by zero not allowed.\n");
            break;
        default: printf("Invalid operator.\n");
    }
    return 0;
}

