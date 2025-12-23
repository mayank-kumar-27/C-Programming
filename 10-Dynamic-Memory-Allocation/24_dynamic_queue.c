// Dynamic queue
#include <stdio.h>
#include <stdlib.h>

struct Queue {
    int *arr;
    int front, rear;
    int capacity;
};

void initQueue(struct Queue *q, int cap) {
    q->arr = (int*)malloc(cap * sizeof(int));
    q->front = -1;
    q->rear = -1;
    q->capacity = cap;
}

void enqueue(struct Queue *q, int val) {
    if (q->rear == q->capacity - 1) return;
    if (q->front == -1) q->front = 0;
    q->arr[++q->rear] = val;
}

int dequeue(struct Queue *q) {
    if (q->front == -1 || q->front > q->rear) return -1;
    return q->arr[q->front++];
}

int main() {
    struct Queue q;
    initQueue(&q, 5);
    enqueue(&q, 10);
    enqueue(&q, 20);
    printf("Dequeue: %d\n", dequeue(&q));
    free(q.arr);
    return 0;
}