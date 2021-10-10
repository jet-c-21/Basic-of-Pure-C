#include <stdio.h>

void swap(int *a_ptr, int *b_ptr) {
    int temp = *a_ptr;
    *a_ptr = *b_ptr;
    *b_ptr = temp;
}

int main() {
    int a = 1, b = 100;
    printf("Before swap : a = %d; b = %d \n", a, b);

    swap(&a, &b);
    printf("After swap : a = %d; b = %d \n", a, b);
}