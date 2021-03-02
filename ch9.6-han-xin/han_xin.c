#include <stdio.h>

void han_xin(){
    printf("plz enter count: ");
    int n;
    scanf("%d", &n);

    for(int i = n; i > 0; i--){
        if ( i%3 == 2 && i%5 == 3 && i%7 == 2){
            printf("ans is = %d \n", i);
            break;
        }
    }
    
}

void han_xin_v2(){
    for(int i = 1; i > 0; i++){
        if ( i%3 == 2 && i%5 == 3 && i%7 == 2){
            printf("ans is = %d \n", i);
            // break;
        }
    }
    
}


void han_xin_v3(){
    int number;
    for(number = 1; !(number%3 == 2 && number%5 == 3 && number%7 == 2); number++);
    
    printf("%d", number);
    
}

void han_xin_v4(){
    printf("plz enter count: ");
    int n;
    scanf("%d", &n);

    for(int i = n; i > 0; i--){
        if ( i%3 == 2 && i%5 == 3 && i%7 == 2){
            printf("ans is = %d \n", i);
        }
    }
    
}


void han_xin_v5(){
    printf("plz enter count: ");
    int n;
    scanf("%d", &n);

    for(int i = 0; i <= n; i++){
        if ( i%3 == 2 && i%5 == 3 && i%7 == 2){
            printf("ans is = %d \n", i);
        }
    }
    
}

void han_xin_v6(){
    printf("plz enter min: ");
    int min;
    scanf("%d", &min);

    printf("plz enter max: ");
    int max;
    scanf("%d", &max);

    for(int i = max; i >= min; i--){
        if ( (i >= min) && (i%3 == 2 && i%5 == 3 && i%7 == 2)){
            printf("ans is = %d \n", i);
        }
    }
    
}

void han_xin_v7(){
    int ans_count = 0;

    for(int i = 1; i <= 1000; i++){
        if (ans_count < 3 && (i%3 == 2 && i%5 == 3 && i%7 == 2)){
            ans_count += 1;
            printf("ans is = %d \n", i);
        }
    }
    
}


void han_xin_v8(){
    int ans_count = 0;

    for(int i = 1; i <= 1000; i++){
        if (i%3 == 2 && i%5 == 3 && i%7 == 2){
            ans_count ++;

            if (ans_count <= 3)
                printf("ans is = %d \n", i);
        }
    }
    
}

void han_xin_v9(){
    int ans_count = 0;

    for(int i = 1; i <= 1000; i++){
        if (i%3 == 2 && i%5 == 3 && i%7 == 2){
            ans_count ++;

            if (ans_count == 3)
                printf("ans is = %d \n", i);
        }
    }
    
}

void han_xin_v10(){
    int count = 0;
    int number;

    for(number = 1; number <= 1000; number++){
        if (number%3 == 2 && number%5 == 3 && number%7 == 2){
            count++;
            if (count == 3)
                printf("ans is = %d \n", number);
        }
    }
    
}


int main() {
    // han_xin();
    // han_xin_v2();
    // han_xin_v3();
    // han_xin_v4();
    // han_xin_v5();
    // han_xin_v6();
    // han_xin_v7();
    // han_xin_v8();
    // han_xin_v9();
    han_xin_v10();


    return 0;
}