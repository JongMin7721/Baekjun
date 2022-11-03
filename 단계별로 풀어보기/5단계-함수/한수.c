#include <stdio.h>

int main(void)
{
    int n, cnt = 0;

    scanf("%d", &n);

    for (int i = 1; i <= 1000; i++)
    {
        if (n < i)
        {
            break;
        }
        if (i < 100)
        {
            cnt++;
            continue;
        }
        else if (i < 1000)
        {
            if ((i / 100 - i / 10 % 10) == (i / 10 % 10 - i % 10))
            {
                cnt++;
            }
        }
    }

    printf("%d", cnt);

    return 0;
}