#include <stdio.h>

int main(void)
{
    int n;

    scanf(" %d", &n);

    if (n >= 200 && n < 206)
    {
        printf("1\n");
    }
    else if (n >= 206 && n < 218)
    {
        printf("2\n");
    }
    else if (n >= 218 && n < 229)
    {
        printf("3\n");
    }
    else
    {
        printf("4\n");
    }

    return 0;
}