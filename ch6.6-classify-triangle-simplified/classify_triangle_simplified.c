#include <stdio.h>

void classify_triangle() {
    int a, b, c, temp;
    printf("plz enter first value: ");
    scanf("%d", &a);
    printf("plz enter second value: ");
    scanf("%d", &b);
    printf("plz enter third value: ");
    scanf("%d", &c);

    // printf("Before: %d %d %d \n", a, b, c);
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

    if (a == c)
        printf("it's a regular triangle \n");
    else if (a == b || b == c)
        printf("it's a isosceles triangle \n");
    else if (a * a + b * b == c * c)
        printf("it's a rectangular triangle \n");
}

int main() {
    classify_triangle();
    return 0;
}