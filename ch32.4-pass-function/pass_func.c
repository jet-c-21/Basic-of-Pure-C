#include <stdio.h>
int add(int, int);
int multiply(int, int);
int calculate(int start, int end, int (*)(int, int));

int main() {
    printf("%d \n", calculate(1, 5, add));
    printf("%d \n", calculate(1, 5, multiply));

    return 0;
}

int add(int a, int b) { return a + b; }

int multiply(int a, int b) { return a * b; }

int calculate(int start, int end, int (*op)(int, int)) {
    int result = start;
    for (int i = result + 1; i <= end; i++) {
        result = op(result, i);
    }

    return result;
}