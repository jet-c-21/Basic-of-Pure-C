#include <stdio.h>

void print_passed_array(int **v, int height, int width) {
    int i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            printf("%d ", v[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int v[2][3] = {{1, 2, 3}, {4, 5, 6}};
    // print_passed_array(v, 2, 3); // note: expected ‘int **’ but argument is of type ‘int (*)[3]’
    int *ptr_arr[2] = {v[0], v[1]};

    print_passed_array(ptr_arr, 2, 3);

    return 0;
}