#include <stdio.h>

int i = 1;

int main() {
    printf("print-1: %d \n", i); // 1
    int i = 2;
    printf("print-2: %d \n", i); // 2
    {
        printf("print-3: %d \n", i); // 2
        int i = 3;
        printf("print-4: %d \n", i); // 3
    }

    printf("print-5: %d \n", i); // 2

    return 0;
}