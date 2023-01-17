#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
    int key;
    struct Node *next;
} Node;

typedef struct
{
    Node *front, *rear;
} Queue;

void init(Queue *q);
int isEmpty(Queue *q);
void push(Queue *q, int key);
int pop(Queue *q);
int size(Queue *q);
int front(Queue *q);
int back(Queue *q);

int main(void)
{
    Queue que;
    int n, key;
    char m[8];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf(" %s", m);

        if (!strcmp(m, "push"))
        {
            scanf(" %d", &key);
            push(&que, key);
        }
        else if (!strcmp(m, "pop"))
        {
            printf("%d\n", pop(&que));
        }
        else if (!strcmp(m, "size"))
        {
            printf("%d\n", size(&que));
        }
        else if (!strcmp(m, "empty"))
        {
            printf("%d\n", isEmpty(&que));
        }
        else if (!strcmp(m, "front"))
        {
            printf("%d\n", front(&que));
        }
        else if (!strcmp(m, "back"))
        {
            printf("%d\n", back(&que));
        }
    }
}

int pop(Queue *q)
{
    if (isEmpty(q))
    {
        return -1;
    }

    Node *ptr;
    int key;

    ptr = q->front;
    key = ptr->key;
    q->front = ptr->next;

    if (q->front == NULL)
    {
        q->rear = NULL;
    }

    free(ptr);
    return key;
}

void push(Queue *q, int key)
{
    Node *newnode = (Node *)malloc(sizeof(Node));
    newnode->key = key;
    newnode->next = NULL;

    if (isEmpty(q))
    {
        q->front = newnode;
        q->rear = newnode;
    }
    else
    {
        q->rear->next = newnode;
        q->rear = newnode;
    }
}

void init(Queue *q)
{
    q->front = q->rear = NULL;
}

int isEmpty(Queue *q)
{
    return (q->front == NULL);
}

int size(Queue *q)
{
    Node *ptr;
    int cnt = 0;
    for (ptr = q->front; ptr != NULL; ptr = ptr->next)
    {
        cnt++;
    }

    return cnt;
}

int front(Queue *q)
{
    if (isEmpty(q))
    {
        return -1;
    }

    return q->front->key;
}

int back(Queue *q)
{
    if (isEmpty(q))
    {
        return -1;
    }

    return q->rear->key;
}