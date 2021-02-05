#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
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

    return 0;
}