
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

struct node {
    int data;
    struct node *next;
};

int main(void) {
    // Malloc an int, char, array
    int *int_ptr = malloc(sizeof(int));
    char *char_ptr = malloc(sizeof(char));
    int *array = malloc(SIZE * sizeof(int));
    array[0] = 17;
    array[1] = 5;
    array[2] = 4;

    // How do I malloc a struct node?
    struct node *node_ptr = malloc(sizeof(struct node));

    // How do I initialise the struct node?
    node_ptr->data = 13;
    (*node_ptr).data = 13;
    node_ptr->next = NULL;

    free(node_ptr);

    return 0;
}
