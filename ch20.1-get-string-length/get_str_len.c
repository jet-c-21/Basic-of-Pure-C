#include <stdio.h>
int get_str_len(char str[]) {
    int i;
    for (i = 0; str[i] != '\0'; i++)
        ;
    return i;
}

int str_len(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        // printf("%c \n", str[i]);
        i++;
    }
    return i;
}

int main() {
    char str[12] = "Hello World";
    char str1[11] = "Hello World";

    // char a[] = "xx";
    // char b[] = "bb";
    // char c[] = {'c', 'c', 'c'};

    char s[15] = {
        'h', 'e', 'l', 'l', 'o', ' ',
        'w', 'o', 'r', 'l', 'd', 
    };

    printf("Length: %zu \n", sizeof(str));
    printf("Length: %d \n", str_len(str));

    printf("Length: %zu \n", sizeof(str1));
    printf("Length: %d \n", str_len(str1));

    // printf("Length: %d \n", get_str_len(b));

    // printf("Length: %zu \n", sizeof(str));
    // printf("Length: %zu \n", sizeof(a));
    // printf("Length: %zu \n", sizeof(b));
    // printf("Length: %zu \n", sizeof(c));

    // printf("string len : %d \n", get_str_len(str));
    // printf("string len : %d \n", get_str_len(b));
    // printf("string len : %d \n", get_str_len(c));

    return 0;
}