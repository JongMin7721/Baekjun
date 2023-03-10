#include <stdio.h>

int isBadNumber(int num)
{
    while (num > 0)
    {
        if (num % 10 == 4 || num % 100 == 13)
        {
            return 1;
        }
        num /= 10;
    }
    return 0;
}

int main()
{
    int n, count = 0, num = 0;
    scanf("%d", &n);

    while (count < n)
    {
        num++;
        if (isBadNumber(num) == 1)
        {
            count++;
        }
    }

    printf("%d", num);
    return 0;
}