#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int n;
    struct Node *next;
} Node;

void push(Node *head, int n);
void pop(Node *head);
long prt_sum(Node *head);

int main(void)
{
    int K, n;
    Node head;

    scanf("%d", &K);

    for (int i = 0; i < K; i++)
    {
        scanf("%d", &n);

        if (n != 0)
        {
            push(&head, n);
        }
        else
        {
            pop(&head);
        }
    }

    printf("%ld\n", prt_sum(&head));

    return 0;
}

void push(Node *head, int n)
{
    Node *newnode = (Node *)malloc(sizeof(Node));
    newnode->n = n;

    if (head->next == NULL)
    {
        head->next = newnode;
        newnode->next = NULL;

        return;
    }

    newnode->next = head->next;
    head->next = newnode;

    return;
}

void pop(Node *head)
{
    Node *ptr = head->next;

    if (ptr->next == NULL)
    {
        head->next = NULL;
    }
    else
    {
        head->next = ptr->next;
    }

    free(ptr);

    return;
}

long prt_sum(Node *head)
{
    Node *ptr;
    long sum = 0;

    while (head->next != NULL)
    {
        head = head->next;

        sum += head->n;
    }

    return sum;
}