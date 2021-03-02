#include <stdio.h>

void write_line(){
    printf("plz enter count: ");
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("*");
    }
    printf("\n");
}


int main() {
    write_line();

    return 0;
}