#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void my_dice_counter() {
    srand(time(0)); // set random seed
    int total_time = 6000;
    
    /*
        int arr[6]; -> all element is random

        so we need to do something like this, but in a more concise way:
            arr[0] = arr[1] = arr[2] = arr[3] = arr[4] = arr[5] = 0;

        int arr[0] = {0, 0, 0, 0, 0, 0};
        int arr[] = {0, 0, 0, 0, 0, 0};
        int arr[0] = {0}; -> best way
    */
    
    // int arr[6];
    int arr[6] = {0};
    int i;
    for (i = 1; i <= total_time; i++) {
        int dice_val = rand() % 6 + 1;
        switch(dice_val) {
            case 1: arr[0]++; break;
            case 2: arr[1]++; break;
            case 3: arr[2]++; break;
            case 4: arr[3]++; break;
            case 5: arr[4]++; break;
            case 6: arr[5]++; break; 
        }

    }

    for (i = 1; i <= 6; i ++) {
        printf("%d : %d \n", i, arr[i-1]);
    }
    
}

void my_dice_counter_2() {
    srand(time(0)); // set random seed
    int total_time = 6000;
    int arr[6] = {0};
    int i, j;
    for (i = 1; i <= total_time; i++) {
        int dice_val = rand() % 6 + 1;
        arr[dice_val-1]++;

    }

    for (i = 1; i <= 6; i ++) {
        printf("%d : %d \n", i, arr[i-1]);
    }
    
}

void main() {
    // my_dice_counter();
    my_dice_counter_2();

}