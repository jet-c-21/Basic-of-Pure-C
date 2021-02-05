#include <stdio.h>

void q_id() {
    int id;

    printf("plz enter the id you want to query: \n");
    scanf("%d", &id);

    switch (id) {
        case 2:
            printf("John \n");
            break;

        case 13:
            printf("Mary \n");
            break;

        case 16:
            printf("Amy \n");
            break;

        default:
            printf("Not found. \n");
            break;
    }
}

int main() {
    q_id();
    return 0;
}