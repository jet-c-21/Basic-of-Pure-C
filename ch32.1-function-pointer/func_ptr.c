#include <stdio.h>

int main() {
    void hello();

    // void func() = hello; // error: function ‘func’ is initialized like a variable
    void (*func)() = &hello;
    (*func)();

    void (*f)() =  &hello;
    f(); // (*f)() 

    return 0;
}

void hello() { printf("Hello human! \n"); }