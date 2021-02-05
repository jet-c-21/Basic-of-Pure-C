#include <stdio.h>

int m1() {
    int val1, val2, max_val;

    printf("plz enter first value: ");
    scanf("%d", &val1);

    printf("plz enter second value: ");
    scanf("%d", &val2);

    max_val = val1;
    if (val2 > max_val) {
        max_val = val2;
    }

    printf("maxium = %d", max_val);

    return 0;
}

int main() { 

    m1();

    return 0; 

}