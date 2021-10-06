#include <stdio.h>

char upper_to_lower(char c) {
    if (65<= c && c <= 95) {
        // printf("enter char: %c", c);
        return c + 32;

    } else {
        printf("please enter a upper letter!");
        return 0;
    }
}

int main() {
    char lc = upper_to_lower('A');
    if (lc != 0)
        printf("lower char: %c", lc);

    return 0;
}