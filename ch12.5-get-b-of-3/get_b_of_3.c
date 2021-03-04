#include <stdio.h>
int get_b(int a, int b, int c) {
    if (b > a) a = b;

    if (c > a) a = c;

    return a;
}

int main() {
    printf("plz enter first num: ");
    int a;
    scanf("%d", &a);

    printf("plz enter second num: ");
    int b;
    scanf("%d", &b);

    printf("plz enter third num: ");
    int c;
    scanf("%d", &c);

    printf("the biggest is : %d", get_b(a, b, c));

    return 0;
}