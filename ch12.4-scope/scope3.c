#include <stdio.h>

int main() {
    int i = 3;
    printf("print-1: %d \n", i);  // 3

    if (i == 3) {
        i = i + 1;
        int i = 6;
        printf("print-2: %d \n", i);  // 6
        i = i + 1;
    }

    if (i == 3) {
        printf("print-3: %d \n", i);  // not print
    }

    printf("print-4: %d \n", i); // 4

    return 0;
}