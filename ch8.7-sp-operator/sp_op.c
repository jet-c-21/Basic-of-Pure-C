#include <stdio.h>

int main() {
    int a = 0;
    int b;

    // b = a++; // b will get the modified a
    // printf("a = %d, b = %d", a, b);  // a = 1, b = 0

    // b = ++a; // b will get the original a
    // printf("a = %d, b = %d", a, b); // a = 1, b = 1

    // b = a--;
    // printf("a = %d, b = %d", a, b);

    // b = --a;
    // printf("a = %d, b = %d", a, b);

    // a = a++; // undefined! it's a bad behavior!
    // printf("a = %d", a);

    return 0;
}