#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    do {
      printf("Enter operator (+, -, *, /) or 'q' to quit: ");
        if (scanf(" %c", &operator) != 1) {
             printf("Error: Invalid input. Please enter a valid operator or 'q'.\n");
            while (getchar() != '\n');
            continue;
        }

        if (operator == 'q' || operator == 'Q') {
            break;
        }
        printf("Enter two numbers: ");
        if (scanf("%lf %lf", &num1, &num2) != 2) {
            printf("Error: Invalid input. Please enter two valid numbers.\n");
            while (getchar() != '\n');
            continue;
        }
        if (operator == '+') {
            result = num1 + num2;
        } else if (operator == '-') {
            result = num1 - num2;
        } else if (operator == '*') {
            result = num1 * num2;
        } else if (operator == '/') {
          
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero\n");
                continue; 
            }
        } else {
            printf("Error: Invalid operator\n");
            continue; 
        }
        printf("Result: %.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);

    } while (1); 

    printf("Calculator program terminated.\n");

    return 0;
}
