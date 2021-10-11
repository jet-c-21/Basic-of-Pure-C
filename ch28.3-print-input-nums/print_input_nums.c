#include <stdio.h>

void print_input_num() {
    /*
        This method has a problem
    */

    int* ptr;
    int num_count = 0;

    while (1) {
        int input_num;
        scanf("%d", &input_num);
        if (input_num == 0) break;
        num_count++;

        int num_arr[num_count];

        int i;
        for (i = 0; i < (num_count - 1); i++) {
            num_arr[i] = ptr[i];
        }

        num_arr[num_count - 1] = input_num;

        printf("curr num_arr: ");
        for (i = 0; i < num_count; i++) {
            printf("%d ", num_arr[i]);
        }
        printf("\n");
        ptr = num_arr;
    }

    printf("Numbers (%d): ", num_count);
    for (int j = 0; j < num_count; j++) {
        printf("%d ", ptr[j]);
    }
    printf("\n");
}

void print_input_num_video() {
    int* numbers;
    int length = 0;
    while (1) {
        int input;
        scanf("%d", &input);
        if(input==0) break;

        int larger[length+1];
        for (int i = 0; i < length; i++) larger[i] = numbers[i];

        numbers = larger;
        numbers[length] = input;

        length++;
    }

    printf("Numbers (%d): ", length);
    for (int j = 0; j < length; j++) {
        printf("%d ", numbers[j]);
    }
    printf("\n");
}

int main() {
    // print_input_num();
    print_input_num_video();
}