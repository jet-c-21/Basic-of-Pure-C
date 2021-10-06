#include <stdio.h>

void print_num(int n, int end) {
    printf("%d \n", n);
    if (n==end) {
        return;
    }
    print_num(n+1, end);
}

void print_num_reverse(int head, int tail) {
    printf("%d \n", tail);

    if (tail == head) {
        return;
    }

    print_num_reverse(head, tail - 1);
}


void count_to_3(int i){
    if (i <= 3) {
        printf("%d \n", i);
        count_to_3(i + 1);
    }
}

void count_to_1(int i){
    if (i <= 3) {
        count_to_1(i + 1);
        printf("%d \n", i);
    }
}

int main() {
    // print_num(1,3);
    // print_num_reverse(1,3);

    // count_to_3(1);
    count_to_1(1);

    return 0;
}