#include <stdio.h>

void print_bar_chart() {
    int num_count = 10;
    int i, n, bc_arr[10] = {0};

    for (i = 1; i <= num_count; i++) {
        scanf("%d", &n);
        bc_arr[(n - 1) / 10]++;
    }

    for (i = 0; i < num_count; i++) {
        printf("%3d: ", (i + 1)*10);

        int j;
        for (j = 1; j <= bc_arr[i]; j++) {
            printf("*");
        }

        printf("\n");
    }

}

void print_bar_char_video(){
    int i, j, n, b[10] = {0};
    for (i=1; i<=10; i++) {
        scanf("%d", &n);
        b[(n-1) / 10]++;
    }

    for (i = 1; i <= 10; i++) {
        printf("%3d: ", i*10);
        for (j = 1; j <= b[i-1]; j++) {
            printf("*");
        }
        printf("\n");
    }
}


void main() {
    // print_bar_chart();
    print_bar_char_video();
}