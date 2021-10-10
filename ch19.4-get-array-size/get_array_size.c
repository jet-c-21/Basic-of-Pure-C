#include <stdio.h>

int find_max_in_arr(int v[], int arr_len) {
    int max = v[0];
    for (int i = 1; i < arr_len; i++) {
        if (v[i] > max) {
            max = v[i];
        }
    }

    return max;
}

void play_sizeof() {
    /*
    The returned result of sizeof is "size_t"
    it is a 'long unsigned int'.

    *** The result is depended on the device and compiler ***
    */
    printf("size of int : %zu \n", sizeof(int));            // 4
    printf("size of long int : %zu \n", sizeof(long int));  // 8
    printf("size of 3 : %zu \n", sizeof(3));                // 4

    int v[3] = {1, 2, 3};
    printf("size of v[0] : %zu \n", sizeof(v[0]));             // 4
    printf("size of v : %zu \n", sizeof(v));                   // 12
    printf("Length of v : %zu \n", sizeof(v) / sizeof(v[0]));  // 3
}

void use_sizeof_with_passed_arr(int v[2]) {
    /*
    At here, "v" is not an array anymore because it is passed through a function.
    */
    printf("size of int : %zu \n", sizeof(int));               // 4
    printf("size of v[0] : %zu \n", sizeof(v[0]));             // 4
    printf("size of v : %zu \n", sizeof(v));                   // 8
    printf("Length of v : %zu \n", sizeof(v) / sizeof(v[0]));  // 2
}

int main() {
    // play_sizeof();

    int v[3] = {1,2,3};
    use_sizeof_with_passed_arr(v);

    return 0;
}