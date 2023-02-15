#include <stdio.h>
#define INT_MAX 2147483647

int space[500][500];

int main(void)
{
    int N, M, B, sum = 0, max = -1;

    scanf("%d %d %d", &N, &M, &B);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf(" %d", &space[i][j]);

            if (max < space[i][j])
            {
                max = space[i][j];
            }
        }
    }

    int atime, min_setpoint = 257, min_time = INT_MAX, dirt; // atime:필요시간 min_setpoint:최소높이 min_time:최소시간,dirt:필요흙

    for (int set_point = 0; set_point <= max; set_point++)
    {
        atime = dirt = 0;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (space[i][j] - set_point > 0)
                {
                    atime += (space[i][j] - set_point) * 2;
                }
                else if (space[i][j] - set_point < 0)
                {
                    atime += set_point - space[i][j];
                }

                dirt -= space[i][j] - set_point;
            }
        }

        if (min_time >= atime && dirt <= B)
        {
            min_time = atime;
            min_setpoint = set_point;
        }
    }

    printf("%d %d\n", min_time, min_setpoint);
}
