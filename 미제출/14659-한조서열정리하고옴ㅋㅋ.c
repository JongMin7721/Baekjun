#include <stdio.h>

int main(void)
{
    int N, H, max = 0, cnt = 0, maxcnt = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &H);

        if (max < H)
        {
            cnt = 0;
            max = H;
        }
        else if (max > H)
        {
            cnt++;
        }

        if (maxcnt < cnt)
        {
            maxcnt = cnt;
        }
    }

    printf("%d\n", maxcnt);

    return 0;
}