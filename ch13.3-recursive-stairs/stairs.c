/*
s(N) = {
    N, 1 <= N <= 2
    S(n-1) + S(N-2), N >2
}
*/
#include <stdio.h>

int go_stairs(int n) {
    if (n <= 2) {
        return n;
    }

    return go_stairs(n-1) + go_stairs(n-2);
}

void main() {
    int N;
    printf("N = ");
    scanf("%d", &N);
    printf("Ways for going to stairs : %d\n", go_stairs(N));
}