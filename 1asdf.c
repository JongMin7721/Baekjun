#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int imp, num; // imp : 중요도 num : 순서
    struct Node *next;
} Node;

void init(Node *set);
void insert_Node(Node *set, int n, int i);
void prt_Node(Node *set, int i)
{
    int cnt = 0;
    while (set->next != NULL)
    {
        set = set->next;
        cnt++;
        printf("%d", set->num);
        if (set->num == i)
        {
            printf("%d\n", cnt);
            break;
        }
    }

    return;
}

int main(void)
{
    Node set;
    int T, N, M, k;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &N, &M);

        init(&set);

        for (int j = 0; j < N; j++)
        {
            scanf(" %d", &k);
            insert_Node(&set, k, j);
        }

        prt_Node(&set, M);
    }
}

void init(Node *set)
{
    set->imp = set->num = 0;
    set->next = NULL;
}

void insert_Node(Node *set, int n, int i)
{
    Node *newnode = (Node *)malloc(sizeof(Node));
    newnode->num = i;
    newnode->imp = n;
    newnode->next = NULL;

    if (set->next == NULL)
    {
        set->next = newnode;
        return;
    }

    Node *ptr;
    int chk = 0;

    while (set->next != NULL)
    {
        ptr = set;
        set = set->next;

        if (chk)
        {
            continue;
        }

        if (set->imp < n)
        {
            chk = 1;
            break;
        }
        else if (set->imp > n)
        {
            chk = 1;
        }
    }

    if (chk)
    {
        newnode->next = ptr->next;
        ptr->next = newnode;
    }
    else
    {
        newnode->next = set->next;
        set->next = newnode;
    }
    return;
}