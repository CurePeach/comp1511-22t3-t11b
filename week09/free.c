#include <stdio.h>
#include <stdlib.h>

struct node {
    int          data;
    struct node *next;
};

void free_list(struct node *head);
struct node *insert_first(int data, struct node *head);
struct node *create_node(int data);
void print_list(struct node *head);

int main(void) {
    struct node *list = create_node(13);
    list = insert_first(6, list);
    list = insert_first(9, list);
    list = insert_first(11, list);
    list = insert_first(9, list);

    print_list(list);

    free_list(list);

    return 0;
}

void free_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        struct node *to_free = curr;
        curr = curr->next;
        free(to_free);
    }
}

struct node *insert_first(int data, struct node *head) {
    struct node *new = create_node(data);
    new->next = head;

    return new;
}

struct node *create_node(int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;

    return new;
}

void print_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        
        curr = curr->next;
    }
    printf("X\n");
}