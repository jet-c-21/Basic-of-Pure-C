# include <stdio.h>


void upper_to_lower(char input, char* output) {
    if (65<= input && input <= 95) {
        // printf("enter char: %c \n", input);
        *output =  input + 32;

    } else {
        printf("please enter a upper letter! \n");
        *output = 0;
    }
}


int main() {
    char input, output;
    printf("please enter a upper letter: ");
    scanf("%c", &input);

    upper_to_lower(input, &output);

    // printf("output char = %c \n", output);

    if (output != 0)
        printf("converted char = %c \n", output);

    return 0;
}