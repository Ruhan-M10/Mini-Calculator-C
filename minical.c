#include <stdio.h> //NAME:Ruhan , SAPID:590014201


int main() {
    char a;
    float b;
    float c;
    float r;

    printf("\nSelect an operator (+, -, *, /, %% ): ");
    if (scanf(" %c", &a) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    printf("Enter NUM1: ");
    if (scanf("%f", &b) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    printf("Enter NUM2: ");
    if (scanf("%f", &c) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    switch (a) {
        case '+':
            r = b + c;
            printf("\nResult: %f\n", r);
            break;
        case '-':
            r = b - c;
            printf("\nResult: %f\n", r);
            break;
        case '*':
            r = b * c;
            printf("\nResult: %f\n", r);
            break;
        case '/':
            if (c == 0) {
                printf("Error: Division by zero\n");
                return 1;
            }
            r = b / c;
            printf("\nResult: %f\n", r);
            break;
        case '%':
            r = (int)b % (int)c;
            printf("\nResult: %d\n", (int)r);
            break;
        default:
            printf("%c is not a valid operator\n", a);
            return 1;
    }

    return 0;
}