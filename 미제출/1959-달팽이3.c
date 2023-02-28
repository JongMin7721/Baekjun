#include <stdio.h>

int main(void)
{
    int i = 0, j = 0, n, m, turn = 0;
    scanf("%d %d", &n, &m);

    while (1)
    {
        switch (turn % 4)
        {
        case 0:
            i++;
            break;
        case 1:
            m--;
            break;
        case 2:
            n--;
            break;
        case 3:
            j++;
            break;
        default:
            break;
        }

        if (i == n || j == m)
        {
            break;
        }

        turn++;
    }

    printf("%d\n%d %d %d %d\n", turn, i, j, n, m);
    printf("%d %d\n", n, j + 1);

    return 0;
}