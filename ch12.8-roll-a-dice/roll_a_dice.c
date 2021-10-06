#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll() {
    srand(time(0));
    int rand_num = rand() % 6;
    if (rand_num == 0) return 6;

    return rand_num;
}

int roll_v2(int n) {
    srand(time(0) * n);
    int rand_num = rand() % 6;
    if (rand_num == 0) return 6;

    return rand_num;
}

int roll_v3(int roll_time) {
    srand(time(0));
    for (int i = 0; i < 5; i++) {
        int dice_num = rand() % 6;
        if(dice_num == 0) dice_num = 6;
        printf("you got %d \n", dice_num);
    }
}

int main() {
    roll_v3(5);

    return 0;
}
