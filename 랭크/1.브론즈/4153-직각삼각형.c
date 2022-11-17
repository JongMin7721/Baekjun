#include <stdio.h>

int main(void) // 4153번
{
    int n = 1, m = 1, h = 1;

    scanf("%d %d %d", &n, &m, &h);

    do
    {
        int N = n * n, M = m * m, H = h * h;
        if (N == M + H || M == N + H || H == N + M)
        {
            printf("right\n");
        }
        else
        {
            printf("wrong\n");
        }
        scanf("%d %d %d", &n, &m, &h);
    } while (n != 0 || m != 0 || h != 0);

    return 0;
}