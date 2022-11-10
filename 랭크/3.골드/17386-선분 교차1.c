#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x, y;
} Vector;

long long crossProduct(Vector a, Vector b);
int direction(Vector a, Vector b, Vector c);
int lineSegIntersect(Vector *p);

int main(void) // 17386번
{
    Vector p[4];

    for (int i = 0; i < 4; i++)
    {
        scanf("%d %d", &p[i].x, &p[i].y);
    }

    printf("%d\n", lineSegIntersect(p));

    return 0;
}

long long crossProduct(Vector a, Vector b)
{
    return ((long long)a.x * b.y - (long long)a.y * b.x);
}

int direction(Vector a, Vector b, Vector c)
{
    Vector ca, cb;

    ca.x = a.x - c.x, ca.y = a.y - c.y;
    cb.x = b.x - c.x, cb.y = b.y - c.y;

    return (crossProduct(ca, cb) > 0) ? 1 : -1;
}

int lineSegIntersect(Vector *p)
{
    if (direction(p[0], p[1], p[2]) * direction(p[0], p[1], p[3]) < 0 && direction(p[2], p[3], p[0]) * direction(p[2], p[3], p[1]) < 0)
    {
        return 1;
    }

    return 0;
}