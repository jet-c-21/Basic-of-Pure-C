#include <stdio.h>

void get_mode() {
    int num_count = 10;
    int i, n, num_arr[10] = {0};

    for (i = 1; i <= num_count; i++) {
        scanf("%d", &n);
        num_arr[n-1]++;
    }

    int mode = 0;
    
    for (i = 1; i < num_count; i++) {
        if (num_arr[i] > num_arr[mode]) {
            mode = i;
        }
    }

    printf("Ans: %d", mode + 1);

}

void main() {
    get_mode();
}