#include <stdio.h>

int main() {
    int v[5] = {1, 2, 3, 4, 5};

    int *ptr;
    for (ptr = v; ptr < &v[5]; ptr++) {
        printf("%d \n", *ptr);
    }

    printf("======================== \n");

    for (ptr = v; ptr < v + 5; ptr++) {
        printf("%d \n", *ptr);
    }
    printf("======================== \n");

    ptr = v;
    while (ptr < v + 5) {
        printf("%d \n", *ptr);
        ptr++;
    }

    return 0;
}