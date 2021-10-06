#include <stdio.h>
#include <time.h>

static unsigned NEXT = 1;

void srand(unsigned int seed) { NEXT = seed; }

int my_rand() {
    NEXT = NEXT * 1103515245 + 12345;
    int rand = (unsigned int)(NEXT / 65536) % 32768;
    return rand;
}

int main() {
    srand(time(0));

    for (int i = 0; i < 5; i++) {
        printf("%d \n", my_rand());
    }

    return 0;
}
