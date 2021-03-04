#include <stdio.h>
int get_b(int a, int b, int c) {
    if (b > a) a = b;

    if (c > a) a = c;

    return a;
}

int main() {
    printf("plz enter three num: ");
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    printf("the biggest is : %d", get_b(a, b, c));

    return 0;
}