#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int total = 0, term = 0;
    // printf("total = %d  term = %d \n", total, term);

    int flag = 1;
    while (flag) {
        printf("plz enter a number to add, enter 0 to quit: ");
        int curr_int;
        scanf("%d", &curr_int);

        if (curr_int != 0) {
            total += curr_int;
            term += 1;
        } else {
            flag = 0;
        }
    }

    float mean = (float)total / term;
    printf("mean = %f \n", mean);
    return 0;
}