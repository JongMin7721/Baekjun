#include <stdio.h>

typedef struct emp
{
    int h, m, s;
} emp;

int main(void)
{
    emp in, out;

    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d %d %d %d %d", &in.h, &in.m, &in.s, &out.h, &out.m, &out.s);

        if (out.s < in.s)
        {
            out.s = out.s + 60 - in.s;
            out.m--;
        }
        else
        {
            out.s -= in.s;
        }

        if (out.m < in.m)
        {
            out.m = out.m + 60 - in.m;
            out.h--;
        }
        else
        {
            out.m -= in.m;
        }

        out.h -= in.h;

        printf("%d %d %d\n", out.h, out.m, out.s);
    }

    return 0;
}