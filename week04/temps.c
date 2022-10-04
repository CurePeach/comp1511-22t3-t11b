// Scanning temperatures in a loop

#include <stdio.h>

#define MAX_ARRAY_SIZE 1024

int main(void) {
    // Initialise an empty array
    double temps[MAX_ARRAY_SIZE];

    // While loop using scanf
    double value;

    // Long way
    int i = 0;
    int return_value = scanf("%lf", &value);
    while (return_value == 1) {
        // Insert into the array
        temps[i] = value;
        i++;
        // printf("i = %d\n", i);

        return_value = scanf("%lf", &value);
    }

    // Short way
    // while (scanf("%lf", &value) == 1) {

    // }


    // Find the maximum temperature
    int length = i;
    if (length == 0) {
        return 0;
    }

    double max_temp = temps[0];
    i = 0;
    while (i < length) {
        if (temps[i] > max_temp) {
            max_temp = temps[i];
        }

        i++;
    }

    // Print the maximum temperature
    printf("Max temperature is %lf\n", max_temp);

    return 0;
}