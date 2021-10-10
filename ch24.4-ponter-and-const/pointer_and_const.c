#include <stdio.h>

int main() {
    char str_a[] = "test";
    char *str_b = "test";
    const char *str_c = "test";

    str_a[0] = 'T';
    // str_b[0] = 'T';  // (X)
    // str_c[0] = 'T';  // (X)

    // str_a = str_b;  // (X)
    // str_a = str_c;  //(X)
    str_b = str_a;  // (O)
    // str_b = str_c;  // (X) : warning: assignment discards ‘const’ qualifier from pointer target type
    str_c = str_a;  // (O)
    str_c = str_b;  // (O)

    return 0;
}
