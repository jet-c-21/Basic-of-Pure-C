#include <stdio.h>
#include <stdlib.h>

void print_input_num() {
    /*
        This method has a problem
    */

    int* ptr = 0;
    int num_count = 0;

    while (1) {
        int input_num;
        scanf("%d", &input_num);
        if (input_num == 0) break;
        num_count++;

        ptr = realloc(ptr, sizeof(int) * num_count);
        ptr[num_count - 1] = input_num;
        
    }

    printf("Numbers (%d): ", num_count);
    for (int j = 0; j < num_count; j++) {
        printf("%d ", ptr[j]);
    }
    printf("\n");
}

void print_input_num_video() {
    int* numbers = 0;  // 0 indicate it is a Null Pointer
    int length = 0;
    while (1) {
        int input;
        scanf("%d", &input);
        if (input == 0) break;

        numbers = realloc(numbers, sizeof(int) * (length + 1));

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
    print_input_num();
    // print_input_num_video();
}