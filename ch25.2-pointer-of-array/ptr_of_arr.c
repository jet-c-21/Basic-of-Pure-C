#include <stdio.h>

void print_with_ptr_of_arr(int (*p)[3]) {
    int i;
    for (i = 0; i < 3; i++) {
        printf("%d ", (*p)[i]);
    }
    printf("\n");
}

void print_with_1st_el_ptr(int *p) {
    int i;
    for (i = 0; i < 3; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");
}

int main() {
    int v[3] = {1, 2, 3};
    print_with_ptr_of_arr(&v);
    print_with_1st_el_ptr(v);

    return 0;
}