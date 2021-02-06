#include <stdio.h>

void for_1_to_10() {
    for (int i = 1; i <= 10; i++) {
        printf("%d \n", i);
    }
}

void for_10_to_1() {
    for (int i = 10; i >= 1; i--) {
        printf("%d \n", i);
    }
}

void print_odd() {
    for (int i = 1; i <= 10; i += 2) {
        printf("%d \n", i);
    }
}

void print_not_3_mul() {
    for (int i = 1; i <= 10; i++) {
        if (i % 3 && !(i % 2)) {
            printf("%d \n", i);
        }
    }
}

void get_val_sum() {
    int total = 0;
    for (int i = 1; i <= 100; i++) {
        total += i;
    }

    printf("total = %d", total);
}




int main() {
    // for_1_to_10();
    // for_10_to_1();
    // print_odd();
    // print_not_3_mul();
    get_val_sum();

    return 0;
}