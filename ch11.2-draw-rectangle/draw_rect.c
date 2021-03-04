#include <stdio.h>

void draw_solid_rect() {
    printf("plz enter a number: ");
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void draw_hollow_rect() {
    printf("plz enter a number: ");
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i == 1 || i == n) {
            for (int j = 1; j <= n; j++) {
                printf("*");
            }
        } else {
            for (int j = 1; j <= n; j++) {
                if (j == 1 || j == n) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}

void draw_hollow_rect_v2() {
    printf("plz enter a number: ");
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i > 1 && i < n && j > 1 && j < n) {
                printf(" ");
            } else {
                printf("*");
            }
        }

        printf("\n");
    }
}

void draw_hollow_rect_v3() {
    printf("plz enter a number: ");
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }
}

int main() {
    // draw_solid_rect();
    // draw_hollow_rect();
    // draw_hollow_rect_v2();
    draw_hollow_rect_v3();

    return 0;
}