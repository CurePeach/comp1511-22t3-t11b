#include <stdio.h>

#define MAX_LETTERS 100

int main (void) {

    char line[MAX_LETTERS];
    while (fgets(line, MAX_LETTERS, stdin) != NULL) {
        printf("Input: %s\n", line);
    }

    return 0;
}
