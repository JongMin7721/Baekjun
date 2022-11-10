#include <stdio.h>

int main(void) // 1546번
{
    int num;
    float score[1000], total = 0, max_score = 0;

    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        scanf(" %f", &score[i]);
    }

    for (int i = 0; i < num; i++)
    {
        if (max_score < score[i])
        {
            max_score = score[i];
        }
        total += score[i];
    }

    printf("%f", total / max_score / num * 100);

    return 0;
}