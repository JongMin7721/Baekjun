#include <stdio.h>

typedef struct
{
    int h, w, n;
} ac;

int main(void) // 10250번
{
    int n, i, j, k;
    scanf("%d", &n);

    ac p;

    for (i = 0; i < n; i++)
    {
        scanf("%d %d %d", &p.h, &p.w, &p.n);

        for (j = 0; j < p.w; j++)
        {
            for (k = 0; k < p.h; k++)
            {
                p.n--;
                if (!p.n)
                {
                    break;
                }
            }
            if (!p.n)
            {
                break;
            }
        }

        printf("%d\n", (k + 1) * 100 + (j + 1));
    }

    return 0;
}