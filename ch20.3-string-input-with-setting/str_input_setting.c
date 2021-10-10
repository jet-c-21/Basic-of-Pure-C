#include <stdio.h>

void str_read(char str[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        scanf("%c", &str[i]);
        if (str[i] == '\n')
            break;
    }
    str[i] = '\0';
}

int main() {
    char str[15];
    str_read(str, 6);
    printf("%s\n", str);

    return 0;
}