#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void my_bubble_sort() {
    srand(time(0));

    // >>> generate a array >>>
    int i, new_num, arr[10], counter[10] = {0};
    for (i = 1; i <= 10; i++) {
        do {
            new_num = rand() % 10 + 1;
        } while (counter[new_num - 1] != 0);

        arr[i - 1] = new_num;
        counter[new_num - 1]++;
    }

    printf("array before sorting : ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // <<< generate a array <<<

    // >>> Sort >>>
    int j, t;
    for (i = 0; i < (10 - 1); i++) {
        for (j = 0; j < (10 - i); j++) {
            if (arr[j] > arr[j + 1]) {
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }

    printf("array after sorting : ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // <<< Sort <<<
}

int main() {
    my_bubble_sort();
    return 0;
}