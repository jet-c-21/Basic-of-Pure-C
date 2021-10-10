#include <stdio.h>

void swap(int *a_ptr, int *b_ptr) {
    int temp = *a_ptr;
    *a_ptr = *b_ptr;
    *b_ptr = temp;
}

void change_order(int *a_ptr, int *b_ptr) {
    if (*a_ptr > *b_ptr) {
        swap(a_ptr, b_ptr);
    }
}



int main() {
    int a = 6;
    int b = 3;

    change_order(&a, &b);
    printf("a = %d; b = %d", a, b);

    return 0;
}