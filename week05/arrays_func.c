
#include <stdio.h>

#define MAX_SIZE 1024

void square(int x);
void square_array(int array[MAX_SIZE], int length);
void print_array(int array[MAX_SIZE], int length);

int main(void) {
    int num = 3;
    printf("num = %d\n", num);

    square(num);
    printf("num = %d\n", num);

    int array[MAX_SIZE] = {1, 2, 3};
    printf("array = ");
    print_array(array, 3);

    square_array(array, 3);
    printf("array = ");
    print_array(array, 3);

    return 0;
}

// Modifies x so that it equals x * x
// Takes an integer x
// Returns nothing
void square(int x) {
    x = x * x;
}

// Squares all elements inside the array
// Takes in array and its size
// Returns nothing
void square_array(int array[MAX_SIZE], int length) {
    int i = 0;
    while (i < length) {
        array[i] = array[i] * array[i];
        i++;
    }
}

// Prints an array
// Takes in an array and its size
// Returns nothing
void print_array(int array[MAX_SIZE], int length) {
    int i = 0;
    while (i < length) {
        printf("%d ", array[i]);
        i++;
    }
    printf("\n");
}