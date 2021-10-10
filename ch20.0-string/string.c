#include <stdio.h>

void print_f_with_arr(char str[]) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
}

void print_str(char str[]) { printf("%s\n", str); }

int main() {
    char str_a[] = {'h', 'i', '\0'};

    char str_b[] = "hi";

    print_f_with_arr(str_a);
    print_str(str_a);
    print_f_with_arr(str_b);
    print_str(str_b);
}