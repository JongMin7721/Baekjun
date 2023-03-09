#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int n;
    struct Node *next;
} Node;

void init(Node *stu);
void line(Node *stu, int n, int i);
void prt_line(Node *stu);

int main(void)
{
    int N, k;
    Node stu;

    init(&stu);

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf(" %d", &k);
        line(&stu, k, i);
    }

    prt_line(&stu);
}

void init(Node *stu)
{
    stu->next = NULL;
    stu->n = 0;
}

void line(Node *stu, int n, int i)
{
    Node *newnode = (Node *)malloc(sizeof(Node));
    newnode->next = NULL;
    newnode->n = i + 1;

    if (stu->next == NULL)
    {
        stu->next = newnode;
        return;
    }

    int num = 0;

    while (num < i - n)
    {
        stu = stu->next;
        num++;
    }

    newnode->next = stu->next;
    stu->next = newnode;

    return;
}

void prt_line(Node *stu)
{
    stu = stu->next;
    printf("%d", stu->n);

    while (stu->next != NULL)
    {
        stu = stu->next;
        printf(" %d", stu->n);
    }

    printf("\n");

    return;
}