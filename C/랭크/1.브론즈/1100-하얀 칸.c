#include <stdio.h>

int main(void)
{
    char ar;
    int change = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            scanf(" %c", &ar);
            if (!((i + j) % 2) && (int)ar == 'F')
            {
                change++;
            }
        }
    }

    printf("%d\n", change);

    return 0;
}