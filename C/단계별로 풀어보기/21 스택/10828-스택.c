#include <stdio.h>
#include <string.h>

void push(int val);
int pop();
int empty();
int top();

int arr[10000];
int ind = -1;

int main(void)
{
    int n, val;
    char func[8];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s", func);

        if (!strcmp(func, "push"))
        {
            scanf(" %d", &val);
            if (val <= 0)
            {
                continue;
            }

            push(val);
        }
        else if (!strcmp(func, "pop"))
        {
            printf("%d\n", pop());
        }
        else if (!strcmp(func, "size"))
        {
            printf("%d\n", ind + 1);
        }
        else if (!strcmp(func, "empty"))
        {
            empty();
        }
        else if (!strcmp(func, "top"))
        {
            top();
        }
    }

    return 0;
}

void push(int val)
{
    arr[++(ind)] = val;

    return;
}

int pop()
{
    if (ind == -1)
    {
        return -1;
    }
    else
    {
        return arr[(ind)--];
    }
}

int empty()
{
    if (ind == -1)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
}

int top()
{
    if (ind == -1)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", arr[ind]);
    }
}