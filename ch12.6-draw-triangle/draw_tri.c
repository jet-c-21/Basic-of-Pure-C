#include <stdio.h>
int get_num();

void draw_tri(int n);

void print_stars(int c);


int get_num() {
    printf("plz enter a number: ");
    int n;
    scanf("%d", &n);
    return n;
}

void draw_tri(int n) {
    for (int i = 1; i <= n; i++) {
        print_stars(i);
        printf("\n");
    }
}

void print_stars(int c) {
    for (int i = 1; i <= c; i++) {
        printf("*");
    }
}

int main() {
    int n = get_num();

    draw_tri(n);

    return 0;
}