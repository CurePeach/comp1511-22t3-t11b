#include <stdio.h>
#include <string.h>

struct person {
    char character_name[100];
    int num;
};

void swap_numbers(struct person *member1, struct person *member2);
void print_person(struct person member);

int main(void) {
    struct person clarissa;
    strcpy(clarissa.character_name, "Clarissa");
    clarissa.num = 21;
    print_person(clarissa);
    struct person sunny;
    strcpy(sunny.character_name, "Sunny");
    sunny.num = 16;
    print_person(sunny);

    struct person *clarissa_ptr = &clarissa;
    swap_numbers(clarissa_ptr, &sunny);
    print_person(clarissa);
    print_person(sunny);

    int a = 5;
    int b = 3;
    int *to_change = get_largest(&a, &b);
    *to_change = 0;

    int array[3] = {1, 2, 3};
    print_array(array, 3);
    // prints "1 2 3"
    print_array(&array[0], 3);
    // prints "1 2 3"
    print_array(&array[1], 2);
    // prints "2 3"

    return 0;
}

// Swaps the numbers of each struct
void swap_numbers(struct person *member1, struct person *member2) {
    int temp_num = (*member1).num;

    member1->num = member2->num;
    member2->num = temp_num;

    // print_person(member1);
    // print_person(member2);
}

int *get_largest(int *a, int *b);

void print_person(struct person member) {
    printf("%s: %d\n", member.character_name, member.num);
}
