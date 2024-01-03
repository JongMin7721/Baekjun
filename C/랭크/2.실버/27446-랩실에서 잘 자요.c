#include <stdio.h>

int main(void)
{
    int N, M, k, pages[100] = {0}, all_inks = 0, cnt, blink;

    scanf("%d %d", &N, &M);

    for (int i = 0; i < M; i++)
    {
        scanf(" %d", &k);
        if (!pages[k - 1])
        {
            pages[k - 1]++;
        }
    }

    cnt = blink = 0;
    for (int i = 0; i < N; i++)
    {
        if (!pages[i])
        {
            if (blink >= 3 && cnt > 0)
            {
                all_inks += 5 + cnt * 2;
                cnt = 1;
            }
            else if (cnt != 0)
            {
                cnt += blink + 1;
            }
            else
            {
                cnt++;
            }

            blink = 0;
        }
        else
        {
            blink++;
        }

        if (i == N - 1)
        {
            all_inks += 5 + cnt * 2;
        }
    }

    // for (int i = 0; i < N; i++)
    // {
    //     printf("%d ", pages[i]);
    // }

    printf("%d\n", all_inks == 5 ? 0 : all_inks);
}