#include <stdio.h>

int find_max_in_arr(int[], int);

int main() {
    int a[3] = {3, 9, 7};
    printf("Max : %d \n", find_max_in_arr(a, 3));

    int b[6] = {1, 7, 8, 55, 9, 2};
    printf("Max : %d \n", find_max_in_arr(b, 6));

    return 0;
}

int find_max_in_arr(int v[], int arr_len) {
    int max = v[0];
    for (int i = 1; i < arr_len; i++) {
        if (v[i] > max) {
            max = v[i];
        }
    }

    return max;
}