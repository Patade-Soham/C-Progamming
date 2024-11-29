//exp3
// WAP to design a menu driven calculator using switch and goto
//241P004

#include <stdio.h>

int main() {
    int choice, num1, num2;
    float result;

    start:
    printf("\nMenu Driven Calculator\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Exit\n");

    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    if (choice == 5) {
        printf("Exiting program...\n");
        return 0;
    }

    if (choice >= 1 && choice <= 4) {

        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);
    }

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result: %d + %d = %.2f\n", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %d - %d = %.2f\n", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %d * %d = %.2f\n", num1, num2, result);
            break;
        case 4:
            if (num2 != 0) {
                result = (float)num1 / num2;
                printf("Result: %d / %d = %.2f\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
    }

    goto start;
}
/*Output

Menu Driven Calculator
1. Add
2. Subtract
3. Multiply
4. Divide
5. Exit
Enter your choice (1-5): 1
Enter two numbers: 50 25
Result: 50 + 25 = 75.00

Menu Driven Calculator
1. Add
2. Subtract
3. Multiply
4. Divide
5. Exit
Enter your choice (1-5):*/

