#include <stdio.h>

void increase_int(int n) { n++; }

void increase_array_len_3(int arr[3]) {
    int i;
    for (i = 0; i < 3; i++) {
        arr[i]++;
    }
}

int main() {
    int a = 1;
    increase_int(a);
    printf("a after increase : %d \n", a);

    int v[3] = {1, 2, 3};
    increase_array_len_3(v);
    printf("v after increase : ");

    for(int i = 0; i < 3; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}