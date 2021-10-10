#include <stdio.h>
#include <string.h>

void ineffective_copy() {
    char source[5] = "test";
    
    // shallow copy
    char *dest_ptr = source;
    printf("%s \n", dest_ptr);

    // deep copy
    int i;
    char dest[5];
    for (i = 0; i < 5; i++) {
        dest[i] = source[i];
    }
    printf("%s \n", dest);

}

void use_strcpy() {
    // const char source[5] = "test";
    // const char source;
    const char *source = "test";
    char dest[5];

    strcpy(dest, source);
    printf("%s \n", dest);
}


int main() {
    // ineffective_copy();
    use_strcpy();

    return 0;
}