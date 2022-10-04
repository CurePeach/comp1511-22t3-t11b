// Exploration of arrays

#include <stdio.h>

#define MAX_ARRAY_SIZE 1024

// Create three procedures:
// odd_only - makes sure all the values in an integer array are odd and print
// the array
void odd_only(int array[MAX_ARRAY_SIZE], int length);

// copy_array - copy elements from a double array into another and print the
// copied array
void copy_array(
    double src[MAX_ARRAY_SIZE], 
    double dest[MAX_ARRAY_SIZE], 
    int length
);

// largest_character - print out the largest character in a character array

void print_array(int array[MAX_ARRAY_SIZE], int length);
void print_double_array(double array[MAX_ARRAY_SIZE], int length);

int main(void) {
    // Create an integer array
    int nums[MAX_ARRAY_SIZE] = {3, 4, 5};
    int zeroes[MAX_ARRAY_SIZE] = {0};
    int ones[MAX_ARRAY_SIZE] = {1};
    int uninitialised[MAX_ARRAY_SIZE];
    nums[0] = 3;

    // Create a double array
    double old[3] = {1.5, 3.2, 6.4};
    double new[3] = {0};
    copy_array(old, new, 3);
    print_double_array(new, 3);

    // Create a character array
    char hello[5] = {'h', 'e', 'l', 'l', 'o'};

    // Print an array
    // printf("%d\n", nums[0]);
    // printf("%d\n", nums[1]);
    // printf("%d\n", nums[2]);
    print_array(nums, 4);

    odd_only(nums, 3);
    print_array(nums, 3);

    return 0;
}

// Prints the given array
// Takes in the array to print and its length
// Returns nothing
void print_array(int array[MAX_ARRAY_SIZE], int length) {
    int i = 0;
    while (i < length) {
        printf("%d ", array[i]);

        i++;
    }
    printf("\n");
}

void print_double_array(double array[MAX_ARRAY_SIZE], int length) {
    int i = 0;
    while (i < length) {
        printf("%lf ", array[i]);

        i++;
    }
    printf("\n");
}

void odd_only(int array[MAX_ARRAY_SIZE], int length) {
    int i = 0;
    while (i < length) {
        if (array[i] % 2 == 0) {
            array[i] = array[i] + 1;
        }

        i++;
    }

    print_array(array, length);
}

void copy_array(
    double src[MAX_ARRAY_SIZE], 
    double dest[MAX_ARRAY_SIZE], 
    int length
) {
    int i = 0;
    while (i < length) {
        dest[i] = src[i];

        i++;
    }
    length = 5;

    print_double_array(dest, length);
}
