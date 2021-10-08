#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gen_rand_10_num_by_change() {
    srand(time(0));
    int i, n_arr[10];
    for (i = 1; i <= 10; i++) {
        n_arr[i - 1] = i;
    }

    for (i = 1; i <= 10; i++) {
        int j = rand() % (11 - i) + i;
        int t = n_arr[i - 1];
        n_arr[i - 1] = n_arr[j - 1];
        n_arr[j - 1] = t;

        printf("%d ", n_arr[i - 1]);
    }
}

void main() { gen_rand_10_num_by_change(); }