#include <stdio.h>

int main() {
    int int_var;
    double double_var;
    int int_arr[3];

    // warning: initialization of ‘int *’ from incompatible pointer type ‘double *’
    int *int_ptr = &double_var;      

    // warning: initialization of ‘double *’ from incompatible pointer type ‘int *’
    double *double_ptr = &int_var;   
    
    // warning: initialization of ‘int **’ from incompatible pointer type ‘int *’
    int **int_ptr_ptr = &int_var;    

    // warning: initialization of ‘int **’ from incompatible pointer type ‘int (*)[3]’
    int **int_ptr_ptr_2 = &int_arr;  

    // warning: initialization of ‘int **’ from incompatible pointer type ‘int *’
    int **int_ptr_ptr_3 = int_arr;   

    int a = 1;
    const int *c = &a;  // (const int *) = (int *)

    return 0;
}