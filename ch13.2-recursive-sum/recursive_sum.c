#include <stdio.h>

int recur_sum(int n) {
    if (n == 1) {
        return 1;
    } 
    return recur_sum(n - 1) + n;
}

void main() {
    int N;
    printf("N = ");
    scanf("%d", &N);

    int res = recur_sum(N);

    printf("%d \n", res);
}