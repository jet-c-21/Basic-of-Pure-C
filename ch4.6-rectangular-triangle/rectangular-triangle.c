#include <stdio.h>

int main() {
    printf("please enter the length of the triangle: \n");

    int side1, side2, side3;
    printf("please enter side1 value: \n");
    scanf("%d", &side1);

    printf("please enter side1 value: \n");
    scanf("%d", &side2);

    printf("please enter side1 value: \n");
    scanf("%d", &side3);

    printf("side1 = %d \n", side1);
    printf("side2 = %d \n", side2);
    printf("side3 = %d \n", side3);

    if (side1 * side1 + side2 * side2 == side3 * side3 ||
        side1 * side1 + side3 * side3 == side2 * side2 ||
        side2 * side2 + side3 * side3 == side1 * side1) {
        printf("it is a rectangular triangle");
    } else {
        printf("it is a normal triangle");
    }

    return 0;
}