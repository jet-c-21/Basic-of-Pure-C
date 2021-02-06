#include <stdio.h>

void one_to_ten() {
    int count = 0;
    while (count < 10) {
        printf("%d \n", count + 1);
        count += 1;
    }
}

void custom_count() {
    printf("plz enter the number: ");
    int end;
    scanf("%d", &end);

    int term = 0;
    while (term < end) {
        printf("%d \n", term + 1);
        term += 1;
    }
}

void print_range() {
    int start, end;
    printf("plz enter start int: ");
    scanf("%d", &start);
    printf("plz enter end int: ");
    scanf("%d", &end);

    while (start <= end) {
        printf("%d \n", start);
        start += 1;
    }
}

int main() {
    // one_to_ten();
    // custom_count();

    print_range();

    return 0;
}