#include <stdio.h>

void mt() {
    // multiplicand * multiplier = product
    for (int multiplicand = 1; multiplicand <= 9; multiplicand++) {
        for (int multiplier = 1; multiplier <= 9; multiplier++) {
            printf("%d * %d = %d \n", multiplicand, multiplier,
                   multiplicand * multiplier);
        }
        printf("\n");
    }
}

void mt_v2() {
    for (int n = 1; n <= 81; n++) {
        int i = (n - 1) / 9 + 1;
        int j = (n - 1) % 9 + 1;
        printf(" %d * %d = %d \n", i, j, i*j);
    }
}

int main() {
    // mt();
    mt_v2();
    return 0;
}