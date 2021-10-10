#include <stdio.h>

int main() {
    char str_a[] = "test";
    const char *str_b = "test";

    str_a[0] = 'T';
    // str_b[0] = 'T'; // (X)

    // str_a = "Test";  // (X)
    str_b = "Test";

    return 0;
}