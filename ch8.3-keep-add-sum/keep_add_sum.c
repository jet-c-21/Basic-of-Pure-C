#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int total = 0;
    
    int flag = 1;
    while (flag) {
        printf("plz enter a number to add, enter 0 to quit: ");
        int curr_int;
        scanf("%d", &curr_int);

        if (curr_int != 0) {
            total += curr_int;
        } else {
            flag = 0;
        }
    }

    printf("total = %d \n", total);

    return 0;
}