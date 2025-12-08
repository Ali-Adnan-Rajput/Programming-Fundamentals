#include <stdio.h>
#include <string.h>

int main() {
    int a, b;
    char op[3];   // to store operator like +, -, *, /, ==, >= etc.

    // Take number inputs
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Take operator input
    printf("Enter operator (+, -, *, /): ");
    scanf("%s", op);

    // Perform operation
    if (strcmp(op, "+") == 0) {
        printf("Result = %d\n", a + b);
    }
    else if (strcmp(op, "-") == 0) {
        printf("Result = %d\n", a - b);
    }
    else if (strcmp(op, "*") == 0) {
        printf("Result = %d\n", a * b);
    }
    else if (strcmp(op, "/") == 0) {
        if (b != 0)
            printf("Result = %d\n", a / b);
        else
            printf("Error: Division by zero!\n");
    }
    else {
        printf("Invalid operator!\n");
    }

    return 0;
}
