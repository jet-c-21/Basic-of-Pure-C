#include <stdio.h>

void get_check(int cus_num, int *check_val) {
    int base = 300;
    float discount = 0.8f;
    if (cus_num * base >= 3000) {
        *check_val = base * cus_num * discount;
    } else {
        *check_val = base * cus_num;
    }
}

int main() {
    printf("How many customer are here? ");

    int cus_num, check_val;
    scanf("%d", &cus_num);
    printf("customer number = %d \n", cus_num);

    get_check(cus_num, &check_val);
    printf("your check = %d \n", check_val);

    return 0;
}
