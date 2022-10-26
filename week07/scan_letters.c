#include <stdio.h>

#define MAX_LETTERS 100

int main (void) {

    char my_var;
    while (scanf(" %c", &my_var) == 1) {
        printf("Input: %c\n", my_var);
    }

    // int result = scanf(" %c", &my_var);
    // while (result == 1) {
    //     printf("Input: %c\n", my_var);

    //     result = scanf(" %c", &my_var);
    // }

    return 0;
}
