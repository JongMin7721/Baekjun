#include <stdio.h>
#include <stdlib.h>

int main(void) // 4344번
{
    int num, cnt, *total_cnt, final_cnt;
    float avg, *total_score;
    scanf("%d", &num);
    int **stu = (int **)malloc(sizeof(int *) * num);
    total_cnt = (int *)malloc(sizeof(int) * num);

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &cnt);
        final_cnt = 0;
        total_cnt[i] = cnt;
        stu[i] = (int *)malloc(sizeof(int) * cnt);
        total_score = (float *)malloc(sizeof(float) * cnt);

        for (int j = 0; j < cnt; j++)
        {
            scanf(" %d", &stu[i][j]);
            total_score[i] += stu[i][j];
        }

        for (int j = 0; j < cnt; j++)
        {
            if ((total_score[i] / cnt) < stu[i][j])
            {
                final_cnt++;
            }
        }

        avg = (float)final_cnt / (float)total_cnt[i];
        printf("%.3f%%\n", avg * 100);
    }

    free(total_cnt);
    for (int i = 0; i < cnt; i++)
    {
        free(stu[i]);
    }
    free(stu);

    return 0;
}
