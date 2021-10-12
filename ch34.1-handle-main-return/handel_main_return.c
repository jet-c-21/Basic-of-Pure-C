#include <stdio.h>
#include <stdlib.h>

// for ubuntu 20.04

int main() {
    printf("%d \n", system("./program_1")); // 0
    printf("%d \n", system("./program_2")); // 2304
}