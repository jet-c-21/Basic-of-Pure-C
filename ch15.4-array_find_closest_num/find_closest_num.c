#include <stdio.h>
#include <stdlib.h>


// can use <stdlib.h> - abs function instead
int get_dist(int n1, int n2) {
    if (n1 > n2) {
        return n1 - n2;
    }
    return n2 - n1;
}


void find_closest_num() {
    int num_count = 10;
    int i, n_arr[num_count];

    for (i = 0; i < num_count; i++) {
        scanf("%d", &n_arr[i]);
    }

    while (1) {
        int q;
        printf("Q: ");
        scanf("%d", &q);

        if (q == 0)
            break;

        int c_num = n_arr[0];
        int dist = get_dist(c_num, q);

        for (i = 1; i < num_count; i ++) {
            int curr_dist = get_dist(n_arr[i], q);
            if ( curr_dist < dist) {
                c_num = n_arr[i];
                dist = curr_dist;
            }
        }
        printf("closest number : %d \n", c_num);
    }
}

void main() {
    find_closest_num();
}