#include <stdio.h>

int main() {
    int a[4] = {4, 8, 12, 16};
    int b[2] = {0, 1};
    int c[3] = {100, -100};

    int *ptr_arr[3] = {a, b, c};

    int i;
    for (i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d \n", ptr_arr[i][j]);
        }
    }

    return 0;
}