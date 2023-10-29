#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float num1, num2;

    printf("Menu-based Calculator\n");
    printf("---------------------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square Root\n");
    printf("6. Power\n");
    printf("7. Exit\n");

    while (1) {
        printf("\nEnter your choice (1-7): ");
        scanf("%d", &choice);

        if (choice == 7) {
            printf("Exiting the calculator...\n");
            break;
        }

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
        } else if (choice >= 5 && choice <= 6) {
            printf("Enter a number: ");
            scanf("%f", &num1);
        }

        switch (choice) {
            case 1:
                printf("Result: %.2f\n", num1 + num2);
                break;
            case 2:
                printf("Result: %.2f\n", num1 - num2);
                break;
            case 3:
                printf("Result: %.2f\n", num1 * num2);
                break;
            case 4:
                if (num2 != 0) {
                    printf("Result: %.2f\n", num1 / num2);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            case 5:
                if (num1 >= 0) {
                    printf("Result: %.2f\n", sqrt(num1));
                } else {
                    printf("Error: Square root of a negative number is not defined.\n");
                }
                break;
            case 6:
                printf("Enter the power: ");
                scanf("%f", &num2);
                printf("Result: %.2f\n", pow(num1, num2));
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
