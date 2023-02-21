#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int n;
    struct Node *next;
} Node;

int front = 0, rear = 1, BQ[1001];

void ins_edge(Node *head, int n);
void DFS(Node head[], int visitedD[1001], int V);
void BFS(Node head[], int visitedB[1001], int V);

int main(void)
{
    int N, M, V, n, m, visitedD[1001] = {0}, visitedB[1001] = {0};
    Node head[1001] = {0, NULL};

    scanf("%d %d %d", &N, &M, &V);
    for (int i = 0; i < M; i++)
    {
        scanf("%d %d", &n, &m);
        ins_edge(&head[n], m);
        ins_edge(&head[m], n);
    }

    DFS(head, visitedD, V);
    printf("\n");
    BFS(head, visitedB, V);

    return 0;
}

void ins_edge(Node *head, int n)
{
    Node *newnode = (Node *)malloc(sizeof(Node));
    newnode->n = n;
    newnode->next = NULL;

    if (head->next == NULL)
    {
        head->next = newnode;
        return;
    }

    Node *ptr;

    while (head->n < n && head->next != NULL)
    {
        ptr = head;
        head = head->next;
    }

    if (head->n == n)
    {
        free(newnode);
        return;
    }
    else if (head->n < n)
    {
        newnode->next = head->next;
        head->next = newnode;
    }
    else // head->n > n
    {
        newnode->next = head;
        ptr->next = newnode;
    }

    return;
}

void DFS(Node head[], int visitedD[1001], int V)
{
    visitedD[V] = 1;
    printf("%d ", V);

    Node *ptr = &head[V];

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
        if (!visitedD[ptr->n])
        {
            DFS(head, visitedD, ptr->n);
        }
    }

    return;
}

void BFS(Node head[], int visitedB[1001], int V)
{
    int v;
    visitedB[V] = 1;
    BQ[rear++] = V;

    while (front + 1 != rear)
    {
        v = BQ[++front];
        printf("%d ", v);

        Node *ptr = &head[v];
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
            if (!visitedB[ptr->n])
            {
                BQ[rear++] = ptr->n;
                visitedB[ptr->n] = 1;
            }
        }
    }

    printf("\n");

    return;
}