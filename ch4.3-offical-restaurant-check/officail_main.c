# include <stdio.h>

int main() {
  printf("How many customer are here? ");
  
  int cus_num, check_val;
  scanf("%d", &cus_num);
  printf("customer number = %d \n", cus_num);

  int base_val = 300;
  check_val = base_val * cus_num;

  check_val *= 0.8;

  printf("your check = %d \n", check_val);

  return 0;
}