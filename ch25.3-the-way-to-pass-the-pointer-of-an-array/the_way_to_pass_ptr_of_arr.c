#include <stdio.h>

void sizeof_look() {
    int v[3] = {1, 2, 3};
    printf("%zu \n", sizeof(v));      // 12
    printf("%zu \n", sizeof(v[0]));   // 4
    printf("%zu \n", sizeof(&v));     // 8
    printf("%zu \n", sizeof(&v[0]));  // 8
}

void print_arr(int (*p)[3]) {
    int i;
    for (i = 0; i < sizeof(*p) / sizeof((*p)[0]); i++) {
        printf("%d ", (*p)[i]);
    }
    printf("\n");
}

int main() {
    int v[3] = {1, 2, 3};
    // int(*p)[3] = &v;

    // sizeof_look();
    print_arr(&v);

    return 0;
}