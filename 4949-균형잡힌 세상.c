#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
    char cha;
    struct Node *next;
} Node;

void init(Node *head);
void push(Node *head, char c);
int pop(Node *head, char c);
int check_stack(Node *head);

int main(void)
{
    char sen[102];
    int len, chk;
    Node head;

    while (strcmp(sen, ".\n") != 0)
    {
        fgets(sen, 102, stdin);
        len = strlen(sen);
        chk = 1;
        init(&head);

        for (int i = 0; i < len; i++)
        {
            if (sen[i] == '(' || sen[i] == '[')
            {
                push(&head, sen[i]);
            }
            else if (sen[i] == ')' || sen[i] == ']')
            {
                chk = pop(&head, sen[i]);
            }
        }

        if (check_stack(&head))
        {
            chk = 0;
        }

        if (chk && strcmp(sen, ".\n") != 0)
        {
            printf("yes\n");
        }

        if (!chk)
        {
            printf("no\n");
        }
    }
}

void init(Node *head)
{
    head->next = NULL;
}

void push(Node *head, char c)
{
    Node *newnode = (Node *)malloc(sizeof(Node));
    newnode->cha = c;

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

int pop(Node *head, char c)
{
    if (head->next == NULL)
    {
        return 0;
    }

    Node *ptr = head->next;
    head->next = ptr->next;
    char cha = ptr->cha;

    free(ptr);

    if (cha == '(' && c == ')')
    {
        return 1;
    }
    else if (cha == '[' && c == ']')
    {
        return 1;
    }

    return 0;
}

int check_stack(Node *head)
{
    if (head->next != NULL)
    {
        return 1;
    }

    return 0;
}