#include <stdio.h>


int is_prime(){
    printf("plz enter a number: ");
    int n;
    scanf("%d", &n);

    int is_prime = 1;
    for(int i = 2; i < n; i ++) {
        if (n%i == 0) {
            is_prime = 0;
            break;
        }
    }

    if(is_prime){
        printf("it's a prime. \n");
    }else{
        printf("it's not a prime. \n");
    }


}


int main(){
    is_prime();

    return 0;
}