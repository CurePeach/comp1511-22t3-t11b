
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void print_list(struct node *head);
int list_length(struct node *head);
struct node *insert_start(struct node *head, int data);
struct node *insert_middle(struct node *head, int data);
struct node *insert_last(struct node *head, int data);
struct node *create_node(int data, struct node *next);

int main(void) {
    struct node *first = create_node(5, NULL);
    first = create_node(4, first);
    first = create_node(4, first);
    // first = insert_start(first, 3);
    // first = insert_last(first, 3);
    // first = insert_middle(first, 3);
    printf("First (%d): ", list_length(first));
    print_list(first);

    struct node *second = NULL;
    // second = insert_last(second, 3);
    // second = insert_middle(second, 3);
    printf("Second: ");
    print_list(second);

    struct node *third = create_node(17, NULL);
    // third = insert_middle(third, 3);
    printf("Third: ");
    print_list(third);

    struct node *fourth = create_node(1, NULL);
    fourth = create_node(3, fourth);
    // fourth = insert_middle(fourth, 2);
    printf("Fourth: ");
    print_list(fourth);

    return 0;
}

// Prints a linked list
void print_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);

        curr = curr->next;
    }
    printf("X\n");
}

// Gets the length of the linked list
int list_length(struct node *head) {
    int count = 0;
    struct node *curr = head;
    while (curr != NULL) {
        count++;

        curr = curr->next;
    }

    return count;
}

// Inserts at the start of the linked list
struct node *insert_start(struct node *head, int data) {
    struct node *new = create_node(data, NULL);

    // case 1: empty list
    // case 2: one item
    // case 3: everything else
    new->next = head;
    head = new;

    return head;
    // return create_node(data, head);
}

// Inserts at the end of the linked list
struct node *insert_last(struct node *head, int data) {
    // TODO
}

// Inserts in the middle of the linked list
// In an even linked list, it would be the new middle
// Eg. Inserting 2 into 1 -> 3 -> X becomes 1 -> 2 -> 3 -> X
// In an odd linked list, it is the one before the old middle
// Eg. Inserting 2 into 1 -> 3 -> 4 -> X becomes 1 -> 2 -> 3 -> 4 -> X
struct node *insert_middle(struct node *head, int data) {
    // TODO
}

// Malloc's a new node and initialises it
struct node *create_node(int data, struct node *next) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = next;

    return new;
}
