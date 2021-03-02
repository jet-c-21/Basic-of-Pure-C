#include <stdio.h>

void positive_factor(){
    printf("plz enter count: ");
    int n;
    scanf("%d", &n);

    for(int i = n; i > 0; i--){
        if ( n%i == 0){
            printf("%d \n", i);
        }
    }
    
}


int main() {
    positive_factor();

    return 0;
}