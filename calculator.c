
#include <stdio.h>

int main() {
    int choice, n, i, fact, exponent, j;
    float a, b, result;

    while (1) {
        printf("\n----- MENU DRIVEN CALCULATOR -----\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Factorial\n");
        printf("6. Power\n");
        printf("7. Percentage\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter value of a: ");
            scanf("%f", &a);
            printf("Enter value of b: ");
            scanf("%f", &b);
            printf("Result = %f\n", a + b);
        }
        else if (choice == 2) {
            printf("Enter value of a: ");
            scanf("%f", &a);
            printf("Enter value of b: ");
            scanf("%f", &b);
            printf("Result = %f\n", a - b);
        }
        else if (choice == 3) {
            printf("Enter value of a: ");
            scanf("%f", &a);
            printf("Enter value of b: ");
            scanf("%f", &b);
            printf("Result = %f\n", a * b);
        }
        else if (choice == 4) {
            printf("Enter value of a: ");
            scanf("%f", &a);
            printf("Enter value of b: ");
            scanf("%f", &b);
            if (b != 0) {
                printf("Result = %f\n", a / b);
            }
            else {
                printf("Division by zero is not possible\n");
            }
        }
        else if (choice == 5) {
            printf("Enter value of n (0-12): ");
            scanf("%d", &n);
            if (n < 0 || n > 12) {
                printf("Invalid input\n");      
            }
            else {
                fact = 1;
                for (i = 1; i <= n; i++) {
                    fact = fact * i;
                }
                printf("Factorial = %d\n", fact);
            }
        }
        else if (choice == 6) {
            printf("Enter value of base: ");
            scanf("%f", &a);
            printf("Enter value of exponent: ");
            scanf("%d", &exponent);
            if (exponent < 0) {
                if (a == 0) {
                    printf("Invalid calculation\n");
                }
                else {
                    result = 1;
                    for (j = 1; j <= -exponent; j++) {
                        result = result * a;
                    }
                    printf("Power = %.2f\n", 1 / result);
                }
            }
            else {
                result = 1;
                for (j = 1; j <= exponent; j++) {
                    result = result * a;
                }
                printf("Power = %.2f\n", result);
            }
        }
        else if (choice == 7) {
            printf("Enter obtained marks: ");
            scanf("%f", &a);
            printf("Enter total marks: ");
            scanf("%f", &b);
            if (b != 0) {
                printf("Percentage = %f%%\n", (a / b) * 100);
            }
            else {
                printf("Total marks cannot be zero\n");
            }
        }
        else if (choice == 8) {
            printf("Calculator exited successfully!\n");
            break;
        }
        else {
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
