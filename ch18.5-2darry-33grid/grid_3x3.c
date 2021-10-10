#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gen_3x3_grid() {
    srand(time(0));
    int v[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j;
    int pointer = 0;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            int choosed_idx = rand() % (9 - pointer) + pointer;
            int choosed_row = choosed_idx / 3;
            int choosed_col = choosed_idx % 3;

            int temp = v[i][j];
            v[i][j] = v[choosed_row][choosed_col];
            v[choosed_row][choosed_col] = temp;
            pointer++;
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", v[i][j]);
        }
        printf("\n");
    }
}

int main() {
    gen_3x3_grid();

    return 0;
}