#include <stdio.h>

void find_sol_of_eqt() {
    // x + y = 30
    // x * y = 221
    int flag = 1;
    int x = 0;
    while (flag) {
        int y = 30 - x;
        if ( x * y == 221){
            flag = 0;
            printf("ANS: x = %d, y = %d \n", x, y);
        }
        x++;
    }
}


void find_sol_of_eqt_v2() {
    for (int i = 1; i <= 30/2; i++){
        int j = 30 - i;
        if (i*j == 221) {
            printf("x = %d, y = %d \n", i, j);
            break;
        }
    }

}


int main() {
    find_sol_of_eqt();
    find_sol_of_eqt_v2();
    return 0;
}