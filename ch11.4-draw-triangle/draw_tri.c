#include <stdio.h>

void print_coord() {
    printf("plz enter a number: ");
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("(%d,%d) ", i, j);
        }
        printf("\n");
    }
}

void draw_solid_tri() {
    printf("plz enter a number: ");
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void draw_hollow_tri() {
    printf("plz enter a number: ");
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (i == n || j == 1 || j == i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void draw_solid_reverse_tri() {
    printf("plz enter a number: ");
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int space_idx = n - i;
        for (int j = 1; j <= n; j++) {
            if (j <= space_idx) {
                printf(" ");
            } else {
                printf("*");
            }
        }

        printf("\n");
    }
}

void draw_hollow_reverse_tri() {
    printf("plz enter a number: ");
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int space_idx = n - i;
        for (int j = 1; j <= n; j++) {
            if (j <= space_idx) {
                printf(" ");
            } else {
                if (i == n || j == space_idx + 1 || j == n) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
        }

        printf("\n");
    }
}

void draw_solid_reverse_tri_v2() {
    printf("plz enter a number: ");
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i + j > n) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }
}

void draw_hollow_reverse_tri_v2() {
    printf("plz enter a number: ");
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == n || j == n || i + j == n + 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }
}

int main() {
    // draw_solid_tri();
    // draw_hollow_tri();
    // draw_solid_reverse_tri();
    // draw_hollow_reverse_tri();

    // print_coord();

    // draw_solid_reverse_tri_v2();
    draw_hollow_reverse_tri_v2();

    return 0;
}