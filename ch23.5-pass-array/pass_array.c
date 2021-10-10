#include <stdio.h>

int get_max(int *arr_ptr, int arr_len) {
    int max = arr_ptr[0];  // *arr = arr[0]
    for (int i = 1; i < arr_len; i++) {
        // printf("%d \n", arr_ptr[i]);
        if (arr_ptr[i] > max) {
            max = arr_ptr[i];
        }
    }

    return max;
}

void main() {
    int a[3] = {3, 6, 9};
    printf("Max : %d \n", get_max(a, 3));

    int b[6] = {3, 6, 9, 10, 15, 7};
    printf("Max : %d \n", get_max(b, 6));

    int v[5] = {0}; 
    printf("%p \n", v+4);
    printf("%p \n", &v[4]);

    int *p1 = &v[0];
    int *p2 = v;
    printf("%p \n", p1);
    printf("%p \n", p2);

}