#include <stdio.h>

void sort_3val_v1() {
    // int ascending way a <= b <= c
    int a, b, c, temp;
    printf("plz enter first value: ");
    scanf("%d", &a);
    printf("plz enter second value: ");
    scanf("%d", &b);
    printf("plz enter third value: ");
    scanf("%d", &c);

    printf("Before: %d %d %d \n", a, b, c);

    if (a <= b && a <= c) {
        if (c < b) {
            temp = b;
            b = c;
            c = temp;
        }
    } else if (b <= a && b <= c) {
        temp = a;
        a = b;
        b = temp;

        if (c < b) {
            temp = b;
            b = c;
            c = temp;
        }

    } else if (c <= a && c <= b) {
        temp = a;
        a = c;
        c = temp;

        if (c < b) {
            temp = b;
            b = c;
            c = temp;
        }
    }

    printf("After: %d %d %d \n", a, b, c);
}

void sort_3val_v2() {
    // int ascending way : a <= b <= c
    int a, b, c, temp;
    printf("plz enter first value: ");
    scanf("%d", &a);
    printf("plz enter second value: ");
    scanf("%d", &b);
    printf("plz enter third value: ");
    scanf("%d", &c);

    printf("Before: %d %d %d \n", a, b, c);

    if (!(a <= b && a <= c)) {
        if (b <= a && b <= c) {
            temp = a;
            a = b;
            b = temp;
        } else if (c <= a && c <= b) {
            temp = a;
            a = c;
            c = temp;
        }
    }

    if (c < b) {
        temp = b;
        b = c;
        c = temp;
    }

    printf("After: %d %d %d \n", a, b, c);
}

void sort_3val_official() {
    int a, b, c, temp;
    printf("plz enter first value: ");
    scanf("%d", &a);
    printf("plz enter second value: ");
    scanf("%d", &b);
    printf("plz enter third value: ");
    scanf("%d", &c);

    printf("Before: %d %d %d \n", a, b, c);
    /*
        1. make a become the smallest
        2. modify b, c
    */

    if (b < a) {
        // ensure b > a
        temp = a;
        a = b;
        b = temp;
    }

    if (c < a) {
        // ensure c > a
        temp = a;
        a = c;
        c = temp;
    }

    if (c < b) {
        // ensure c > b
        temp = b;
        b = c;
        c = temp;
    }

    printf("After: %d %d %d \n", a, b, c);
}

void sort_3val_official_v2() {
    int a, b, c, temp;
    printf("plz enter first value: ");
    scanf("%d", &a);
    printf("plz enter second value: ");
    scanf("%d", &b);
    printf("plz enter third value: ");
    scanf("%d", &c);

    // printf("Before: %d %d %d \n", a, b, c);

    if (a > b) {
        // ensure b > a
        temp = a;
        a = b;
        b = temp;
    }

    // printf("After: %d %d %d \n", a, b, c);

    if (b > c) {
        // ensure c > b
        temp = b;
        b = c;
        c = temp;
    }

    // printf("After: %d %d %d \n", a, b, c);

    if (a > b) {
        // ensure b > a
        temp = a;
        a = b;
        b = temp;
    }

    printf("After: %d %d %d \n", a, b, c);
}

int main() {
    // sort_3val_v2();
    sort_3val_official_v2();

    return 0;
}