#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char dic[100000][21];

int find_dic(char *ans, int N);

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
        if (!strcmp(ans, dic[i]))
        {
            return i;
        }
    }

    return -1;
}