#include <stdio.h>

float div2(int x) {
    return x / 2;
}


double div2_v2(double x) {
    return x / 2;
}


int main() {
    printf("plz enter a number: ");
    int n;
    scanf("%d", &n);

    printf("%d / 2 = %f \n", n, div2(n));
    printf("%d / 2 = %f \n", n, div2_v2(n));

}