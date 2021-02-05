#include <stdio.h>

void swap_2_vars() {
    int val1, val2;
    printf("plz enter first value: ");
    scanf("%d", &val1);
    printf("plz enter second value: ");
    scanf("%d", &val2);

    int side1 = val1;
    int side2 = val2;

    if (val1 >= val2) {
        side1 = val2;
        side2 = val1;
    }

    printf("side1 = %d side2 = %d \n", side1, side2);
}

void swap_3_var() {
    int a, b, c, temp;
    printf("plz enter first value: ");
    scanf("%d", &a);
    printf("plz enter second value: ");
    scanf("%d", &b);
    printf("plz enter third value: ");
    scanf("%d", &c);

    temp = a;
    a = c;
    c = b;
    b = temp;
}

int main() {
    swap_2_vars();

    return 0;
}