#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef int element;
typedef struct Node
{
    element key;
    struct Node *llink;
    struct Node *rlink;
} Node;

typedef struct
{
    Node *front, *rear;
    int count;
} Deque;

void init(Deque *deq);
void push_front(Deque *deq, element key);
void push_back(Deque *deq, element key);
element pop_front(Deque *deq);
element pop_back(Deque *deq);
element fnt(Deque *deq);
element back(Deque *deq);
int size(Deque *deq);
int empty(Deque *deq);

int main(void)
{
    Deque deq;
    element key;
    int n;
    char order[15];

    init(&deq);
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s", &order);

        if (!strcmp(order, "push_front"))
        {
            scanf(" %d", &key);
            push_front(&deq, key);
        }
        else if (!strcmp(order, "push_back"))
        {
            scanf(" %d", &key);
            push_back(&deq, key);
        }
        else if (!strcmp(order, "pop_front"))
        {
            printf("%d\n", pop_front(&deq));
        }
        else if (!strcmp(order, "pop_back"))
        {
            printf("%d\n", pop_back(&deq));
        }
        else if (!strcmp(order, "size"))
        {
            printf("%d\n", size(&deq));
        }
        else if (!strcmp(order, "empty"))
        {
            printf("%d\n", empty(&deq));
        }
        else if (!strcmp(order, "front"))
        {
            printf("%d\n", fnt(&deq));
        }
        else if (!strcmp(order, "back"))
        {
            printf("%d\n", back(&deq));
        }
    }
}

void init(Deque *d)
{
    d->count = 0;
    d->front = d->rear = NULL;
}

void push_front(Deque *d, element key)
{
    Node *newnode = (Node *)malloc(sizeof(Node));
    newnode->key = key;
    newnode->rlink = NULL;
    newnode->llink = NULL;

    if (empty(d))
    {
        d->rear = newnode;
    }
    else
    {
        d->front->llink = newnode;
        newnode->rlink = d->front;
    }

    d->front = newnode;
    d->count++;

    return;
}

void push_back(Deque *d, element key)
{
    Node *newnode = (Node *)malloc(sizeof(Node));
    newnode->key = key;
    newnode->rlink = NULL;
    newnode->llink = NULL;

    if (empty(d))
    {
        d->front = newnode;
    }
    else
    {
        d->rear->rlink = newnode;
        newnode->llink = d->rear;
    }

    d->rear = newnode;
    d->count++;

    return;
}

element pop_front(Deque *d)
{
    if (empty(d))
    {
        return -1;
    }

    Node *ptr;
    element key;

    ptr = d->front;
    key = ptr->key;

    if (ptr->rlink == NULL)
    {
        d->front = NULL;
        d->rear = NULL;
    }
    else
    {
        ptr->rlink->llink = NULL;
        d->front = ptr->rlink;
    }

    d->count--;
    free(ptr);

    return key;
}

element pop_back(Deque *d)
{
    if (empty(d))
    {
        return -1;
    }

    Node *ptr;
    element key;

    ptr = d->rear;
    key = ptr->key;

    if (ptr->llink == NULL)
    {
        d->front = NULL;
        d->rear = NULL;
    }
    else
    {
        ptr->llink->rlink = NULL;
        d->rear = ptr->llink;
    }

    d->count--;
    free(ptr);

    return key;
}

element fnt(Deque *d)
{
    if (empty(d))
    {
        return -1;
    }

    return d->front->key;
}

element back(Deque *d)
{
    if (empty(d))
    {
        return -1;
    }

    return d->rear->key;
}

int size(Deque *d)
{
    return d->count;
}

int empty(Deque *d)
{
    return d->count == 0;
}