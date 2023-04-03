#include <stdio.h>

int main(void)
{
    int N, cnt = 0;

    scanf("%d", &N);

    N = 1000 - N;
    while (N > 0)
    {
        if (N >= 500)
        {
            N -= 500;
        }
        else if (N >= 100)
        {
            N -= 100;
        }
        else if (N >= 50)
        {
            N -= 50;
        }
        else if (N >= 10)
        {
            N -= 10;
        }
        else if (N >= 5)
        {
            N -= 5;
        }
        else if (N >= 1)
        {
            N -= 1;
        }

        cnt++;
    }

    printf("%d\n", cnt);

    return 0;
}