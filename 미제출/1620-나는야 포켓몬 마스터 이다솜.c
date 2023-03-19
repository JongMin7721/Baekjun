#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Dictionary
{
    char name[21];
    int num;
} Dictionary;

Dictionary dic[100000];

int find_dic(char *ans, int N);
int compare(const void *m, const void *n)
{
    Dictionary *dic1 = (Dictionary *)m;
    Dictionary *dic2 = (Dictionary *)n;

    if (strcmp(dic1->name, dic2->name) > 0)
    {
        return 1;
    }
    else if (strcmp(dic1->name, dic2->name) < 0)
    {
        return -1;
    }
    else
        return 0;
}

int main(void) // 8% timeover
{
    int N, M, num;
    char ans[21];

    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++)
    {
        scanf("%s", dic[i]);
    }

    for (int i = 0; i < M; i++)
    {
        scanf("%s", ans);

        if (ans[0] >= '0' && ans[0] <= '9')
        {
            num = atoi(ans);
            printf("%s\n", dic[num - 1]);
        }
        else
        {
            printf("%d\n", find_dic(ans, N) + 1);
        }
    }

    return 0;
}

int find_dic(char *ans, int N)
{
    for (int i = 0; i < N; i++)
    {
        if (!strcmp(ans, dic[i].name))
        {
            return i;
        }
    }

    return -1;
}