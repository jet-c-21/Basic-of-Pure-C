#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void while_method() {
    srand(time(NULL));
    int ans = (rand() % 100) + 1;
    // printf("ans = %d", ans);

    int flag = 1;
    while (flag) {
        printf("plz guess a number: ");
        int g_num;
        scanf("%d", &g_num);

        if (g_num > ans) {
            printf("too large! \n");
        } else if (g_num < ans) {
            printf("too small! \n");
        } else {
            flag = 0;
            printf("you win! \n");
        }
    }
}

void do_while_method() {
    srand(time(NULL));
    int ans = (rand() % 100) + 1;
    // printf("ans = %d", ans);

    int flag = 1;

    do {
        printf("plz guess a number: ");
        int g_num;
        scanf("%d", &g_num);

        if (g_num > ans) {
            printf("too large! \n");
        } else if (g_num < ans) {
            printf("too small! \n");
        } else {
            flag = 0;
            printf("you win! \n");
        }

    } while (flag);
}

int main() {
    // while_method();
    do_while_method();
    return 0;
}