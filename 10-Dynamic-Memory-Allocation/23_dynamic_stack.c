// Dynamic stack
#include <stdio.h>
#include <stdlib.h>

struct Stack {
    int *arr;
    int top;
    int capacity;
};

void initStack(struct Stack *s, int cap) {
    s->arr = (int*)malloc(cap * sizeof(int));
    s->top = -1;
    s->capacity = cap;
}

void push(struct Stack *s, int val) {
    if (s->top == s->capacity - 1) return;
    s->arr[++s->top] = val;
}

int pop(struct Stack *s) {
    if (s->top == -1) return -1;
    return s->arr[s->top--];
}

int main() {
    struct Stack s;
    initStack(&s, 5);
    push(&s, 10);
    push(&s, 20);
    printf("Pop: %d\n", pop(&s));
    free(s.arr);
    return 0;
}