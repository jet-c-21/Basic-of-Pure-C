#include <stdio.h>

void imp_cov_test () {
    int i = 3;
    char c = 'c';
    float f = 1.2f;
    double d = 3.5;

    i = c; // o
    i = f; // o
    i = d; // o

    c = i; // o
    c = f; // o
    c = d; // o

    f = i; // o
    f = c; // o
    f = d; // o

    d = i; // o
    d = c; // o
    d = f; // o

}

void void_ptr_test() {
    int i = 3;
    void *void_ptr = &i;
    int *int_ptr = void_ptr;
    double *double_ptr = void_ptr;

    printf("%d \n", *int_ptr);
    printf("%f \n", *double_ptr); // -2.821281 strange result
    
    
}

int main() {
    // imp_cov_test();

    void_ptr_test();

    return 0;
}