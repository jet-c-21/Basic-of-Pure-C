#include <stdio.h>

void ver1() {
    unsigned int next = 1;

    for (int i = 1; i <= 5; i++) {
        next = next * 1103515245 + 12345;
        printf("%u \n", next);
    }
}

void ver2() {
    // more mess
    unsigned int next = 1;

    for (int i = 1; i <= 5; i++) {
        next = next * 1103515245 + 12345;
        int rand = (unsigned int)(next / 65536) % 32768;
        // rand = X / 2^16 % 2^15

        printf("%d \n", rand);
    }
}

int my_rand() {
    static unsigned int next = 1;  // static local variable

    next = next * 1103515245 + 12345;
    int rand = (unsigned int)(next / 65536) % 32768;
    return rand;
}

void test_my_rand() {
    // but we cant not set our own random seed

    for (int i = 0; i < 5; i++) {
        printf("%d \n", my_rand());
    }
}

int main() {
    test_my_rand();

    return 0;
}