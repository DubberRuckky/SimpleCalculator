#include <stdio.h>

long long c_pow(int base, int pow) {
    long long res = 1;
    for (int i = 0; i < pow; i++) {
        res *= base;
    }

    return res;
}

int main() {
    // I have three variables the first two are the numbers we operate on and the third is the constant that keeps the loop running
    int num1, num2, load = 1;
    char op, dec;

    do {
        printf("Enter your Num 1: ");
        scanf("%d", &num1);
        printf("Enter your Operator [Operators are '+' '-' '*' '/' '%%' '^']: ");
        scanf("\n%c", &op);
        printf("Enter your Num 2: ");
        scanf("\n%d", &num2);

        switch (op) {
            case '+': printf("Result: %d\n",num1 + num2); break;

            case '-': printf("Result: %d\n",num1 - num2); break;

            case '*': printf("Result: %lld\n",(long long) num1 * (long long) num2); break;

            case '/': switch(num2) {
                case 0: printf("Cannot divide by zero\n"); break;
                default: printf("Result: %.2f\n", (float) num1 / (float) num2); break;
            }
            break;

            // The next part is to give cannot divide by zero errot if it does not exist the program just returns num1

            case '%': switch(num2) {
                case 0: printf("Cannot divide by zero\n"); break;
                default: printf("Result: %d\n",num1 % num2); break;
            }
            break;

            case '^': printf("Result: %lld\n",c_pow(num1, num2)); break;
            default: printf("Invalid Operator\n"); break;
        }
        printf("Do you want to continue? (Y/N) ");
        scanf("\n%c", &dec);

        if (dec == 'n' || dec == 'N') {
            load = 0;
        }

    } while (load);

    printf("Thank you for using SimpleCalculator :)");

    return 0;
}
