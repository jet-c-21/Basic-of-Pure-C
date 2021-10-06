#include <limits.h>
#include <stdio.h>

int print_big_int() {
    int a = 1000;
    int b = a * a * a;
    int c = a * a * a * a;
    printf("%d \n", b);
    printf("%d \n", c);

    // the signed int overflow is an undefined behavior
}

int print_uint() {
    unsigned int a = 1000;
    unsigned int b = a * a * a;
    unsigned int c = a * a * a * a;
    unsigned int d = a * a * a * a;
    printf("%u \n", b);
    printf("%u \n", c);  // 1 0000 0000 0000 % (UINT_MAX + 1)
    printf("%u \n", d);  // 1 0000 0000 0000 % (UINT_MAX + 1)
    printf("%u \n", UINT_MAX);

    return 0;
}

void use_limits() {
    printf("%d \n", INT_MIN);
    printf("%d \n", INT_MAX);
}

int main() {
    // print_big_int();
    // use_limits();

    print_uint();

    return 0;
}