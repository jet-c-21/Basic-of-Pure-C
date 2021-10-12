#include <stdio.h>
#include <string.h>

void input_rand_str_hc() {
    char str_arr[100][50];
    char input[50];
    int str_count = 0;
    while (1) {
        scanf("%s", input);
        if (strcmp(input, "END") == 0) break;

        strcpy(str_arr[str_count], input);
        str_count++;
    }

    printf("---------- \n");
    int i;
    for (i = 0; i < str_count; i++) {
        printf("%s ", str_arr[i]);
    }
    printf("\n");
}

void input_rand_str() {
    char str_table[5000];
    char* str_ptr_arr[100];
    char input[50];
    int recorded_str_size = 0;
    int str_count = 0;

    while (1) {
        scanf("%s", input);
        if (strcmp(input, "END") == 0) break;

        str_ptr_arr[str_count] = str_table + recorded_str_size;
        strcpy(str_ptr_arr[str_count], input);
        recorded_str_size += strlen(input) + 1;  // 1 for '\0'
        str_count++;
    }

    printf("---------- \n");
    int i;
    for (i = 0; i < str_count; i++) {
        printf("%s ", str_ptr_arr[i]);
    }
    printf("\n (%d, %d)", str_count, recorded_str_size);
}

int main() {
    // input_rand_str_hc();
    input_rand_str();

    return 0;
}