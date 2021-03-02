#include <stdio.h>

void vpp() {
    // variable plus plus
    int a = 0;
    int b;

    b = a++; // b will get the original a
    printf("a = %d, b = %d", a, b);  // a = 1, b = 0
}

void ppv() {
    // plus plus variable
    int a = 0;
    int b;

    b = ++a; // b will get the modified a
    printf("a = %d, b = %d", a, b); // a = 1, b = 1
}


int main() {
    // vpp();
    ppv();


    // b = a--;
    // printf("a = %d, b = %d", a, b);

    // b = --a;
    // printf("a = %d, b = %d", a, b);

    // a = a++; // undefined! it's a bad behavior!
    // printf("a = %d", a);

    return 0;
}