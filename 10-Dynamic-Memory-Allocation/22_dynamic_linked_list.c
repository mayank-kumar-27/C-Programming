// Dynamic linked list
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = NULL;
    struct Node *n1 = (struct Node*)malloc(sizeof(struct Node));
    n1->data = 10;
    n1->next = NULL;
    head = n1;
    printf("Data: %d\n", head->data);
    free(n1);
    return 0;
}