// Functions using a struct colour

#include <stdio.h>

struct colour {
    int red;
    int green;
    int blue;
};

struct colour make_colour(int red, int green, int blue);

int main(void) {
    struct colour red = make_colour(255, 0, 0);
    struct colour green = make_colour(0, 255, 0);
    struct colour blue = make_colour(0, 0, 255);

    return 0;
}

// Creates a struct colour with the given values
// Takes in three integers which represent the fields of the struct colour
// Returns the new struct
struct colour make_colour(int red, int green, int blue) {
    struct colour new_colour;

    new_colour.red = red;
    new_colour.green = green;
    new_colour.blue = blue;

    return new_colour;
}

////////////////////////////////
//         Solutions          //
////////////////////////////////

int get_main_colour(struct colour c) {
    if (c.red > c.green && c.red > c.blue) {
        return c.red;
    } else if (c.green > c.red && c.green > c.blue) {
        return c.green;
    } else if (c.blue > c.red && c.blue > c.green) {
        return c.blue;
    } else {
        return 0;
    }
}

double brightness(struct colour colour) {
    return sqrt(colour.red) + sqrt(colour.green) + sqrt(colour.blue);
}

double average_brightness(struct colour colours[100], int size) {
    double avg = 0;

    int i = 0;
    while (i < size) {
        avg += brightness(colours[i]);
        i++;
    }

    return avg / size;
}
