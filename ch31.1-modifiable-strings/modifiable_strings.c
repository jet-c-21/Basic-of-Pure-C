#include <stdio.h>

int main() {
    char str_a[3][4] = {"how", "are", "you"};
    char *str_ptr_arr[3] = {str_a[0], str_a[1], str_a[2]};

    str_ptr_arr[2][0] = 'Y';
    printf("%s \n", str_ptr_arr[2]);

    char str_c[5] = "What";
    str_ptr_arr[0] = str_c;

    printf("%s \n", str_ptr_arr[0]);

    str_ptr_arr[1][0] = 'A';
    printf("%s \n", str_ptr_arr[1]);

    return 0;
}