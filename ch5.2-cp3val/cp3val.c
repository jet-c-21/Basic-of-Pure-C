#include <stdio.h>

int get_max() {
    int val1, val2, val3, max_val;

    printf("plz enter first value: ");
    scanf("%d", &val1);

    printf("plz enter second value: ");
    scanf("%d", &val2);

    printf("plz enter second value: ");
    scanf("%d", &val3);

    max_val = val1;
    if (val2 > max_val) {
        max_val = val2;
    }

    if (val3 > max_val) {
        max_val = val3;
    }

    printf("maxium = %d", max_val);

    return 0;
}

int get_min() {
    int val1, val2, val3, min_val;

    printf("plz enter first value: ");
    scanf("%d", &val1);

    printf("plz enter second value: ");
    scanf("%d", &val2);

    printf("plz enter second value: ");
    scanf("%d", &val3);

    min_val = val1;
    if (val2 < min_val) {
        min_val = val2;
    }

    if (val3 < min_val) {
        min_val = val3;
    }

    printf("minium = %d", min_val);

    return 0;
}

int get_median() {
    int val1, val2, val3, median;

    printf("plz enter first value: ");
    scanf("%d", &val1);

    printf("plz enter second value: ");
    scanf("%d", &val2);

    printf("plz enter second value: ");
    scanf("%d", &val3);

    median = val1;
    if (median > val2 && median > val3) {
        if (val2 >= val3) {
            median = val2;
        } else {
            median = val3;
        }
    } else if (median < val2 && median < val3) {
        if (val2 >= val3) {
            median = val3;
        } else {
            median = val2;
        }
    } else if ((median > val2 && median < val3) ||
               (median < val2 && median > val3)) {
        median = median;
    }

    // val2 == val1 && val3 == val1

    printf("median = %d", median);

    return 0;
}

int get_median_official() {
    int val1, val2, val3, median;

    printf("plz enter first value: ");
    scanf("%d", &val1);

    printf("plz enter second value: ");
    scanf("%d", &val2);

    printf("plz enter second value: ");
    scanf("%d", &val3);

    median = val1;
    if (val1 <= val2 && val2 <= val3 || val3 <= val2 && val2 <= val1) {
        median = val2;

    } else if (val1 <= val3 && val3 <= val2 || val2 <= val3 && val3 <= val1) {
        median = val3;
    }

    // val2 == val1 && val3 == val1

    printf("median = %d", median);

    return 0;
}

int main() {
    // get_median();
    get_median_official();

    return 0;
}