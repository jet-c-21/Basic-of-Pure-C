#include <stdio.h>
void print_seq_1(int base) {
    int last = 0;
    for (int i = 1; i <= 10; i++) {
        if (i == 1) {
            last = 1;
            printf("%d \n", last);
            continue;
        }

        last = last * base;
        printf("%d \n", last);
    }
}

void print_seq_2(int base) {
    int last = 0;
    for (int i = 1; i <= 10; i++) {
        if (i == 1) {
            last = 1;
            printf("%d \n", last);
            continue;
        }

        last = last * base + 3;
        printf("%d \n", last);
    }
}

void print_seq_3(int base) {
    int last = 0;
    for (int i = 1; i <= 100; i++) {
        if (i == 1) {
            last = 1;
            printf("%d \n", last);
            continue;
        }

        last = (last * base + 3) % 16;
        printf("%d \n", last);
    }
}

int main() {
    // print_seq_1(5);
    // print_seq_2(5);
    print_seq_3(5);
    return 0;
}