#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Dictionary
{
    char name[21];
    int num;
} Dictionary;

Dictionary dic1[100000];
Dictionary dic2[100000];

int find_dic(char *ans, int start, int end);
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

int main(void)
{
    int N, M, num;
    char ans[21];

    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++)
    {
        scanf("%s", dic1[i].name);
        strcpy(dic2[i].name, dic1[i].name);
        dic1[i].num = dic2[i].num = i + 1;
    }

    qsort(dic1, N, sizeof(Dictionary), compare);

    for (int i = 0; i < M; i++)
    {
        scanf("%s", ans);

        if (ans[0] >= '0' && ans[0] <= '9')
        {
            num = atoi(ans);
            printf("%s\n", dic2[num - 1].name);
        }
        else
        {
            printf("%d\n", find_dic(ans, 0,  N));
        }
    }

    return 0;
}

int find_dic(char *ans, int start, int end)
{
    if (start > end)
    {
        return -1;
    }
    
    int mid = (start + end) / 2;

    if (strcmp(dic1[mid].name, ans) == 0)
    {
        return dic1[mid].num;
    }else if (strcmp(dic1[mid].name, ans) > 0)
    {
        return find_dic(ans, start, mid - 1);
    }else
    {
        return find_dic(ans, mid + 1, end);
    }
}