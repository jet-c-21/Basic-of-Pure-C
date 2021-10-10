#include <stdio.h>

int main() {
    char str_a[] = "test";
    char *str_b = "test";

    str_a[0] = 'T';
    // str_b[0] = 'T';  // (X) segmentation fault. cuz the data solved memory is read only

    // str_a = "Test";  // (X)
    str_b = "Test";

    return 0;
}