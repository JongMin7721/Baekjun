#include <stdio.h>

typedef struct nums
{
    int a, b, c;
} nums;

int main(void)
{
    int res = 0;
    nums in, out;

    scanf("%d %d %d\n%d %d %d", &in.a, &in.b, &in.c, &out.a, &out.b, &out.c);

    if (in.a < out.a)
    {
        res += out.a - in.a;
    }

    if (in.b < out.b)
    {
        res += out.b - in.b;
    }

    if (in.c < out.c)
    {
        res += out.c - in.c;
    }

    printf("%d\n", res);

    return 0;
}