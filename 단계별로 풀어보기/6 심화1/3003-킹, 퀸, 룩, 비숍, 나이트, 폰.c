#include <stdio.h>

int main(void) // 3003번
{
    int a, b, c, d, e, f;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

    a = (a == 1) ? 0 : 1 - a;
    b = (b == 1) ? 0 : 1 - b;
    c = (c == 2) ? 0 : 2 - c;
    d = (d == 2) ? 0 : 2 - d;
    e = (e == 2) ? 0 : 2 - e;
    f = (f == 8) ? 0 : 8 - f;

    printf("%d %d %d %d %d %d", a, b, c, d, e, f);

    return 0;
}