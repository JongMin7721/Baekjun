#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x, y;
} Vector;

typedef long long int ll;

ll crossProduct(Vector a, Vector b);
int direction(Vector a, Vector b, Vector c);
int lineSegIntersect(Vector *p);

int main(void)
{
    Vector p[4];

    for (int i = 0; i < 4; i++)
    {
        scanf("%d %d", &p[i].x, &p[i].y);
    }

    printf("%d\n", lineSegIntersect(p));

    return 0;
}

ll crossProduct(Vector a, Vector b)
{
    ll num1, num2, res;
    num1 = (ll)a.x * (ll)b.y;
    num2 = (ll)a.y * (ll)b.x;

    res = num1 - num2;

    return (res > 0) ? 1 : ((res == 0) ? 0 : -1);
}

int direction(Vector a, Vector b, Vector c)
{
    Vector ca, cb;
    int n;

    ca.x = a.x - c.x, ca.y = a.y - c.y;
    cb.x = b.x - c.x, cb.y = b.y - c.y;

    n = crossProduct(ca, cb);
    return (n < 0) ? -1 : ((n == 0) ? 0 : 1);
}

int lineSegIntersect(Vector *p)
{
    int d1, d2, d3, d4;
    d1 = direction(p[0], p[1], p[2]);
    d2 = direction(p[0], p[1], p[3]);
    d3 = direction(p[2], p[3], p[0]);
    d4 = direction(p[2], p[3], p[1]);

    if (d1 * d2 < 0 && d3 * d4 < 0)
        return 1;
    else if (d1 == 0 && d3 * d4 < 0)
        return 1;
    else if (d2 == 0 && d3 * d4 < 0)
        return 1;
    else if (d3 == 0 && d1 * d2 < 0)
        return 1;
    else if (d4 == 0 && d1 * d2 < 0)
        return 1;

    return 0;
}