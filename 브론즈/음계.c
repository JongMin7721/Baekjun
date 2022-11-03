#include <stdio.h>

int main(void)
{
    int a[8], check = 0;
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] == i + 1 && check == i)
        {
            check++;
        }
        else if (a[i] == 8 - i && check == 0)
        {
            check += 0;
        }
        else
        {
            printf("mixed\n");
            return 0;
        }
    }
    if (check == 8)
    {
        printf("ascending\n");
    }
    else
    {
        printf("descending\n");
    }

    return 0;
}