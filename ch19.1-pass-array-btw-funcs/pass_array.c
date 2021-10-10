#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void array_set_rand(int[10]);
int get_max(int[10]);
void print_arr(int[10]);

int main() {
    int arr[10];
    array_set_rand(arr);
    print_arr(arr);
    printf("Max : %d \n", get_max(arr));

    return 0;
}

void array_set_rand(int v[10]) {
    srand(time(0));
    int i;
    for (i = 0; i < 10; i++) {
        v[i] = rand() % 100;
    }
}

int get_max(int v[10]) {
    int max = v[0];
    int i;
    for (i = 1; i < 10; i++) {
        if (v[i] > max) {
            max = v[i];
        }
    }

    return max;
}

void print_arr(int v[10]) {
    int i;
    for (i = 0; i < 10; i ++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}