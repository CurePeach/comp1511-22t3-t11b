// Exploring structs and enums

#include <stdio.h>

enum opal_card_type {
    ADULT,
    STUDENT,
    CONCESSION
};

struct date {
    int month;
    int day;
    int year;
};

struct person {
    int shoe_size;
    double height;
    char first_name_initial;
    enum opal_card_type opal_card;
    // int opal_card;
    struct date birthday;
};

struct pet {
    struct date birthday;
};

int main(void) {
    // Create a person named Jessica
    struct person jessica;
    jessica.shoe_size = 7;
    jessica.height = 162;
    char letter = 'j';
    jessica.first_name_initial = letter;
    enum opal_card_type opal_card = STUDENT;
    jessica.opal_card = opal_card;

    // Create a person named Tom
    struct person tom = {
        12,
        116,
        't',
        ADULT
    };

    // How would I print Tom's shoe size?
    printf("Jessica's shoe size: %d\n", jessica.shoe_size);

    // How would I print Tom's first name initial?
    printf("Tom's initial: %c\n", tom.first_name_initial);

    // How would I print Tom's height?

    // Create a student Opal card
    enum opal_card_type student = STUDENT;
    // int                 student = STUDENT;

    // How can we add Opal card types to our original struct person?

    return 0;
}