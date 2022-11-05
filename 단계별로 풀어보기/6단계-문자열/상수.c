#include <stdio.h>
#include <stdlib.h>
#define SWAP(X, Y, T) T = X, X = Y, Y = T

int main(void)
{
    char a1[4], a2[4], t;
    int n1, n2;

    scanf("%s %s", a1, a2);

    SWAP(a1[0], a1[2], t);
    SWAP(a2[0], a2[2], t);

    n1 = atoi(a1);
    n2 = atoi(a2);

    n1 > n2 ? printf("%d\n", n1) : printf("%d\n", n2);

    return 0;
}