#include <stdio.h>

void main() {
    float fn, sn, result;
    char operator;

    printf("Enter first number: ");
    scanf(" %f", &fn);

    printf("Enter second number: ");
    scanf(" %f", &sn);

    printf("Enter operator: ");
    scanf(" %c", &operator);

    switch(operator) {
        case '+':
            result = fn + sn;
            break;
        case '-':
            result = fn - sn;
            break;
        case '*':
            result = fn - sn;
            break;
        case '/':
            result = fn / sn;
            break;
    }
    printf("%.1f %c %.1f = %.1f\n", fn, operator, sn, result);
}
