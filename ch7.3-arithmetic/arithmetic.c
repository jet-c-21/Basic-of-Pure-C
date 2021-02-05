#include <stdio.h>

void if_else_method() {
    int num1, num2;
    char op;
    float ans;

    printf("plz enter the command: \n");
    scanf("%d%c%d", &num1, &op, &num2);

    if (op == '+')
        ans = num1 + num2;
    else if (op == '-')
        ans = num1 - num2;
    else if (op == '*')
        ans = num1 * num2;
    else if (op == '/')
        ans = (float)num1 / num2;
    else
        printf("invalid operator. \n");

    printf("answer = %f", ans);
}

void switch_method() {
    int num1, num2;
    char op;
    float ans;

    printf("plz enter the command: \n");
    scanf("%d%c%d", &num1, &op, &num2);

    switch (op) {
        /*
            if you dont add the break statement and one of the case is
           satisfied, the program will do all the following command of each
           cases.

            for this example it equals:
                ('+' || '-' || '*' || '/' || default)

        */
        case '+':
            ans = num1 + num2;
            // printf("*** \n");
            break;

        case '-':
            ans = num1 - num2;
            // printf("*** \n");
            break;

        case '*':
            ans = num1 * num2;
            // printf("*** \n");
            break;

        case '/':
            ans = (float)num1 / num2;
            // printf("*** \n");
            break;

        default:
            // printf("*** \n");
            printf("invalid operator. \n");
            break;
    }

    printf("answer = %f", ans);
}

int main() {
    switch_method();
    return 0;
}