#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int imp, num; // imp : 중요도 num : 순서
    struct Node *next;
} Node;

void init(Node *set);
void insert_Node(Node *set, int n, int i);
int check_Node(Node *set, int imp);
void prt_Node(Node *set, int i);

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

    while (set->next != NULL)
    {
        set = set->next;
    }

    newnode->next = set->next;
    set->next = newnode;

    return;
}

int check_Node(Node *set, int imp)
{
    while (set->next != NULL)
    {
        set = set->next;
        if (set->imp > imp)
        {
            return 1;
        }
    }

    return 0;
}

void prt_Node(Node *set, int i)
{
    int cnt = 0, num;
    Node *ptr, *pptr;

    while (1)
    {
        ptr = set;
        pptr = set->next;

        ptr->next = pptr->next; // 노드 분리 ptr -> pptr -> 다음값
        pptr->next = NULL;      // ->>      ptr -> 다음값 // pptr -> NULL

        if (check_Node(ptr, pptr->imp)) // 끝까지 반복 후 중요도 높은게 있으면 1 없으면 0
        {
            while (ptr->next != NULL) // pptr을 리스트 마지막으로
            {
                ptr = ptr->next;
            }

            ptr->next = pptr;
        }
        else
        {
            cnt++;
            num = pptr->num;
            free(pptr);
        }

        if (num == i)
        {
            printf("%d\n", cnt);
            break;
        }
    }

    return;
}