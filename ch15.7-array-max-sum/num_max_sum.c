#include <stdio.h>

int get_max(int arr[10]) {
    int max = arr[0];
    int i;
    for (i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int get_sum(int arr[10]) {
    int sum = arr[0];
    int i;
    for (i = 1; i < 10; i++) {
        sum += arr[i];
    }

    return sum;
}

void get_max_sum() {
    int num_count = 10;
    int i, n_arr[10] = {0};

    for (i = 0; i < num_count; i++) {
        scanf("%d", &n_arr[i]);
    }

    int max = get_max(n_arr);
    int sum = get_sum(n_arr);

    printf("Max : %d \n", max);
    printf("Sum : %d \n", sum);
    printf("Avg : %d \n", sum / num_count);

}

void main () {
    get_max_sum();
}