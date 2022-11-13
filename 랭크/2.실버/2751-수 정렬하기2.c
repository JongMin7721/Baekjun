#include <stdio.h>

int main(void) // 2751번    //정답이지만 실행 안됨 //예상 - 너무 큰 배열
{
    int ar[2000001] = {0}, n, m;

    scanf("%d", &n);

    while (n--)
    {
        scanf("%d", &m);
        if (m == 0)
        {
            ar[0]++;
        }
        else if (m < 0)
        {
            ar[-m]++;
        }
        else
        {
            ar[m + 1000000]++;
        }
    }

    for (int i = 1000000; i >= 1; i++)
    {
        if (ar[i])
        {
            printf("%d\n", -i);
        }
    }

    if (ar[0])
    {
        printf("0\n");
    }

    for (int i = 10000001; i < 2000001; i++)
    {
        if (ar[i])
        {
            printf("%d\n", i - 1000000);
        }
    }
}