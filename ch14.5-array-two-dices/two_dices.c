#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void count_two_dices() {
    srand(time(0));
    int total_time = 100000;
    int arr[11] = {0};

    int i;
    for (i = 1; i <= total_time; i++) {
        int dice1 = rand() % 6 + 1;
        int dice2 = rand() % 6 + 1;
        int sum = dice1 + dice2;
        arr[sum-2]++;
    }

    for (i = 2; i <= 12; i++) {
        printf("%d : %d \n", i, arr[i-2]);
    }
}

void main() {
    count_two_dices();
}