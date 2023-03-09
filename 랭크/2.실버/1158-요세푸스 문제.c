#include <stdio.h>

int main(void)
{
    int n, k, arr[5000] = {0}, i, check = 1, count = 0;

    scanf("%d %d", &n, &k);

    i = k - 1;
    printf("<%d", i + 1);
    arr[i] = 1;

    if (n == 1)
    {
        printf(">\n");
        return 0;
    }

    while (1)
    {
        i = (i + 1) % n;
        count++;

        while (arr[i])
        {
            i = (i + 1) % n;
        }

        if (count == k)
        {
            count = 0;
            if (!arr[i])
            {
                printf(", %d", i + 1);
                arr[i] = 1;
                check++;
            }
        }

        if (check == n)
        {
            printf(">\n");
            break;
        }
    }

    return 0;
}