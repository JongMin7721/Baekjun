#include <stdio.h>

int main(void)
{
    int n[5], avg = 0, min, index, temp;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &n[i]);
        avg += n[i];
    }

    for (int i = 0; i < 5; i++)
    {
        min = 101;
        for (int j = i; j < 5; j++)
        {
            if (min > n[j])
            {
                min = n[j];
                index = j;
            }
        }
        temp = n[i];
        n[i] = n[index];
        n[index] = temp;
    }

    printf("%d\n%d", avg / 5, n[2]);
}