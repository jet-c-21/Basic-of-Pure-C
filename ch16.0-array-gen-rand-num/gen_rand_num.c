#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gen_rand_10_num() {
    int i;
    int num_check_arr[10] = {0};
    srand(time(0));

    for (i = 1; i <= 10; i++) {
        int new_num = rand() % 10 + 1;

        while (num_check_arr[new_num - 1] != 0) {
            new_num = rand() % 10 + 1;
        }

        printf("%d ", new_num);
        num_check_arr[new_num - 1] = 1;
    }
}

void gen_rand_10_num_video() {
    srand(time(0));
    int i, j, is_used, arr[10];
    for (i = 1; i <= 10; i++) {
        do {
            arr[i - 1] = rand() % 10 + 1;
            is_used = 0;
            for (j = 1; j < i; j++) {
                if (arr[i - 1] == arr[j - 1]) {
                    is_used = 1;
                    break;
                }
            }
        } while (is_used == 1);
        printf("%d ", arr[i - 1]);
    }

    printf("\n");
}

void main() {
    // gen_rand_10_num();
    gen_rand_10_num_video();
}