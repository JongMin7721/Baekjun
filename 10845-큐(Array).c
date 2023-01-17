#include <stdio.h>
#include <string.h>
#define MAX_SIZE_QUEUE 10000

void push(int num);
int pop();
int size();
int empty();
int front();
int back();

int arr[MAX_SIZE_QUEUE];
int f = -1;
int r = -1;

int main(void)
{
    int n, num;
    char m[8];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf(" %s", m);

        if (!strcmp(m, "push"))
        {
            scanf(" %d", &num);
            push(num);
        }
        else if (!strcmp(m, "pop"))
        {
            printf("%d\n", pop());
        }
        else if (!strcmp(m, "size"))
        {
            printf("%d\n", size());
        }
        else if (!strcmp(m, "empty"))
        {
            printf("%d\n", empty());
        }
        else if (!strcmp(m, "front"))
        {
            printf("%d\n", front());
        }
        else if (!strcmp(m, "back"))
        {
            printf("%d\n", back());
        }
    }

    return 0;
}

void push(int num)
{
    if ((r + 1) % MAX_SIZE_QUEUE == f)
    {
        return;
    }

    r = ++r % MAX_SIZE_QUEUE;
    arr[r] = num;
    return;
}

int pop()
{
    if (empty())
    {
        return -1;
    }

    f = ++f % MAX_SIZE_QUEUE;
    return arr[f];
}

int size()
{
    if (r >= f)
    {
        return r - f;
    }
    else
    {
        return f + r + 2 - MAX_SIZE_QUEUE;
    }
}

int empty()
{
    return r - f % MAX_SIZE_QUEUE == 0;
}

int front()
{
    if (empty())
    {
        return -1;
    }

    return arr[(f + 1) % MAX_SIZE_QUEUE];
}

int back()
{
    if (empty())
    {
        return -1;
    }

    return arr[r];
}