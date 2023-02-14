#include <stdio.h>

typedef struct hw
{
    int h, w;
} hw;

int main(void)
{
    hw arr[50];
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", arr[i].w, arr[i].h);
    }
}