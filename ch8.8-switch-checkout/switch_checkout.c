#include <stdio.h>

void switch_checkout() {
    int total = 0;

    int flag = 1;
    while (flag) {
        int pid;
        printf("plz enter product id: ");
        scanf("%d", &pid);
        switch (pid) {
            case 1:
                total += 90;
                break;

            case 2:
                total += 75;
                break;

            case 3:
                total += 83;
                break;

            case 4:
                total += 89;
                break;

            case 5:
                total += 71;
                break;

            case 0:
                flag = 0;
                break;
        }
    }

    printf("total = %d \n", total);
}

int main() {
    switch_checkout();
    return 0;
}
