
#include <stdio.h>
int main() {
    char operator;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /, %): ");
    if (scanf(" %c", &operator) != 1) return 0;

    printf("Enter two operands: ");
    if (scanf("%lf %lf", &num1, &num2) != 2) return 0;

    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if((int)num2 != 0) {
                result = (int)num1 % (int)num2;
                printf("%d %% %d = %d\n", (int)num1, (int)num2, (int)result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    getchar();
    getchar();
    
    return 0;

}