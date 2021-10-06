#include <stdio.h>

void find_max_num() {
    int num_count = 10;
    int i , n_arr[num_count];

    for (i = 0; i < num_count; i++) {
        scanf("%d", &n_arr[i]);
    }

    while (1) {
        int q;
        printf("Q: ");
        scanf("%d", &q);

        if (q == 0) {
            break;
        }

        int max_idx = -1;
        for (i = 0; i < num_count; i++) {
            if (n_arr[i] <= q && (max_idx == -1 || n_arr[i] > n_arr[max_idx])) {
                max_idx = i;
            }
        }

        if (max_idx != -1) {
            printf("%d \n", n_arr[max_idx]);
        }

    }
    
}

void main() {
    find_max_num();
}