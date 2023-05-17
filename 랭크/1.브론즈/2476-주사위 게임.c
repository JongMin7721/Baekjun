#include <stdio.h>

int main(void)
{
    int n, max = 0, val, a, b, c;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &a, &b, &c);

        if (a == b && b == c)
        {
            val = 10000 + a * 1000;
        }
        else if (a == b)
        {
            val = 1000 + a * 100;
        }
        else if (b == c || c == a)
        {
            val = 1000 + c * 100;
        }
        else
        {
            if (a > b)
            {
                if (a > c)
                {
                    val = 100 * a;
                }
                else
                {
                    val = 100 * c;
                }
            }
            else
            {
                if (b > c)
                {
                    val = 100 * b;
                }
                else
                {
                    val = 100 * c;
                }
            }
        }

        if (max <= val)
        {
            max = val;
        }
    }

    printf("%d\n", max);

    return 0;
}
