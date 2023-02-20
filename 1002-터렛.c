#include <stdio.h>
#include <math.h>

typedef struct Point
{
    int x, y, r;
} Point;

int intersecP(Point *P);

int main(void)
{
    int T;
    Point P[2];

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d %d %d", &P[j].x, &P[j].y, &P[j].r);
        }

        printf("%d\n", intersecP(P));
    }

    return 0;
}

int intersecP(Point *P)
{
    int x = P[0].x - P[1].x, y = P[0].y - P[1].y, r1 = P[0].r - P[1].r, r2 = P[0].r + P[1].r;
    int X = x * x, Y = y * y, R1 = r1 * r1, R2 = r2 * r2, d = X + Y;

    if (x == 0 && y == 0 && r1 == 0)
    {
        return -1;
    }

    if (R1 < d && d < R2)
    {
        return 2;
    }
    else if (R1 == d || R2 == d)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}