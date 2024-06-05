#include <stdio.h>
#include <math.h>

int main() {
    double inputA;
    char operator;
    double inputB;
    double result;

    printf("Enter the first number: ");
    scanf("%lf", &inputA);
    printf("Enter the operator (+ - * / ^): ");
    scanf(" %c", &operator);
    printf("Enter the second number: ");
    scanf("%lf", &inputB);

    switch(operator) {
        case '+':
            result = inputA + inputB;
            break;
        case '-':
            result = inputA - inputB;
            break;
        case '*':
            result = inputA * inputB;
            break;
        case '/':
            result = inputA / inputB;
            break;
        case '^':
            result = pow(inputA, inputB);
            break;
        default:
            printf("%c is not a valid operator", operator);
            return 0;
    }
    printf("Result: %lf", result);
    return 0;
}