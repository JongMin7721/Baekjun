#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int n; // 순서
    struct Node *next;
} Node;

int seq = 1; // 순서
int cnt = 0;
char res[200005]; // 2개 숫자에 대해 ++-- 총4번 즉 입력최대의 2배의 배열 필요

void init(Node *head);
void push(Node *head, int num);
int pop(Node *head, int num);

int main(void)
{
    int n, num, chk = 0;
    Node head;

    init(&head);
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        push(&head, num);

        if (!chk)
        {
            chk = pop(&head, num);
        }
    }

    if (!chk)
    {
        for (int i = 0; i < cnt; i++)
        {
            printf("%c\n", res[i]);
        }
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}

void init(Node *head)
{
    head->n = 0;
    head->next = NULL;

    return;
}

void push(Node *head, int num)
{
    if (num < seq)
    {
        return;
    }

    Node *ptr = head->next;

    while (num >= seq)
    {
        Node *newnode = (Node *)malloc(sizeof(Node));

        newnode->next = head->next;
        head->next = newnode;
        newnode->n = seq;

        res[cnt++] = '+';

        seq++;
    }
}

int pop(Node *head, int num)
{
    Node *ptr = head->next;
    int n = ptr->n;

    if (n != num)
    {
        return 1;
    }

    head->next = ptr->next;

    free(ptr);

    res[cnt++] = '-';

    return 0;
}