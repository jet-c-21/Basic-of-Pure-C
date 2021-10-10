#include <stdio.h>
#include<stdlib.h>

int main() {
    int number;
    while (scanf("%d", &number) != 1) {
        printf("Error : Invalid Input. Please try again. \n");
        scanf("%*[^\n]"); // clear what is left, the * means only match and discard:
    }

    printf("%d \n", number);

    return 0;
}