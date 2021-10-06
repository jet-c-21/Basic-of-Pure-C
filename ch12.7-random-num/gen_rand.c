#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main () {
    // srand(3);
    srand(time(0));


    for (int i =0; i < 5; i++) {

        printf("%d \n", rand());
    }


    return 0;
}