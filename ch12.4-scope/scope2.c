#include <stdio.h>

int i = 5;

int f() {
    i = i + 1;
    printf("print-2: %d \n", i); // 6
    return 0;
}

int main() {
    printf("print-1: %d \n", i); // 5

    int i = 6;
    i = i + 1;

    f();

    printf("print-3: %d \n", i); // 7

    return 0;
}