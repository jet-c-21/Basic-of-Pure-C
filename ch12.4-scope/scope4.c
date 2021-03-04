#include <stdio.h>

int i = 5;

int f() {
    i = i + 1;
    return 0;
}

int main() {

    f();

    printf("print-1: %d \n", i);

    return 0;
}