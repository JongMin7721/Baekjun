#include <stdio.h>
#include <string.h>

void push(int arr[10000], int val, int *index);
int pop(int arr[10000], int *index);
int size();
int empty(int index);
int top(int arr[10000], int index);

int main(void)
{
    int n, arr[10000], val, index = -1;
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

            push(arr, val, &index);
        }
        else if (!strcmp(func, "pop"))
        {
            printf("%d\n", pop(arr, &index));
        }
        else if (!strcmp(func, "size"))
        {
            printf("%d\n", index + 1);
        }
        else if (!strcmp(func, "empty"))
        {
            empty(index);
        }
        else if (!strcmp(func, "top"))
        {
            top(arr, index);
        }
    }
}

void push(int arr[10000], int val, int *index)
{
    arr[++(*index)] = val;

    return;
}

int pop(int arr[10000], int *index)
{
    if (*index == -1)
    {
        return -1;
    }
    else
    {
        return arr[(*index)--];
    }
}

int empty(int index)
{
    if (index == -1)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
}

int top(int arr[10000], int index)
{
    if (index == -1)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", arr[index]);
    }
}