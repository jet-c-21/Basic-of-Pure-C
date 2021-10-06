#include <stdio.h>

void query_num() {
    int number_count = 5;

    int arr[number_count];

    int i;
    for (i = 1; i <= number_count; i ++) {
        printf("%d: ", i);
        scanf("%d", &arr[i-1]);
    }

    printf("You can start to query the number \n");
    
    int flag = 1;
    while (flag){
        printf("Q: ");
        int input_val;
        scanf("%d", &input_val);
        if (input_val != 0) {
            printf("result : %d \n", arr[input_val - 1]);
        } else {
            flag = 0;
        }
    }

}

void main() {
    query_num();
}