#include <stdio.h>
#include <stdlib.h>
#define MAX(a, b) (((a) >= (b)) ? (a) : (b))
#define MIN(a, b) (((a) <= (b)) ? (a) : (b))

typedef struct
{
    int x, y;
} Vector;

typedef long long int ll;

ll crossProduct(Vector a, Vector b);
int direction(Vector a, Vector b, Vector c);
int lineSegIntersect(Vector *p);
int onSegment(Vector a, Vector b, Vector c);

int main(void) // 17387번
{
    Vector p[5];

    for (int i = 1; i <= 4; i++)
    {
        scanf("%d %d", &p[i].x, &p[i].y);
    }

    printf("%d\n", lineSegIntersect(p));

    return 0;
}

ll crossProduct(Vector a, Vector b)
{
    return (((ll)a.x * (ll)b.y) - ((ll)a.y * (ll)b.x));
}

int direction(Vector a, Vector b, Vector c)
{
    Vector ca, cb;
    ll n;

    ca.x = a.x - c.x;
    ca.y = a.y - c.y;
    cb.x = b.x - c.x;
    cb.y = b.y - c.y;

    n = crossProduct(ca, cb);
    return (n > 0) ? 1 : (n < 0 ? -1 : 0);
}

int onSegment(Vector a, Vector b, Vector c)
{
    if ((c.x >= MIN(a.x, b.x)) && (c.x <= MAX(a.x, b.x)) && (c.y >= MIN(a.y, b.y)) && (c.y <= MAX(a.y, b.y)))
    {
        return 1;
    }

    return 0;
}

int lineSegIntersect(Vector *p)
{
    int d1, d2, d3, d4;
    d1 = direction(p[3], p[4], p[1]);
    d2 = direction(p[3], p[4], p[2]);
    d3 = direction(p[1], p[2], p[3]);
    d4 = direction(p[1], p[2], p[4]);
    if (d1 * d2 < 0 && d3 * d4 < 0)
        return 1;
    else if (d1 == 0 && onSegment(p[3], p[4], p[1]))
    {
        return 1;
    }
    else if (d2 == 0 && onSegment(p[3], p[4], p[2]))
    {
        return 1;
    }
    else if (d3 == 0 && onSegment(p[1], p[2], p[3]))
    {
        return 1;
    }
    else if (d4 == 0 && onSegment(p[1], p[2], p[4]))
    {
        return 1;
    }

    return 0;
}