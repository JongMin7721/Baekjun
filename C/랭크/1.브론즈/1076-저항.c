#include <stdio.h>
#include <string.h>

long color(char col[7]);

int main(void)
{
    char f_c[7], s_c[7], l_c[7];
    long pw = 1;

    scanf("%s\n%s\n%s", &f_c, &s_c, &l_c);

    int n = color(l_c);

    for (int i = 0; i < n; i++)
    {
        pw *= 10;
    }

    long long res = (long long)(color(f_c) * 10 + color(s_c)) * pw;
    printf("%lld\n", res);

    return 0;
}

long color(char col[7])
{
    if (strcmp(col, "black") == 0)
    {
        return 0;
    }
    else if (strcmp(col, "brown") == 0)
    {
        return 1;
    }
    else if (strcmp(col, "red") == 0)
    {
        return 2;
    }
    else if (strcmp(col, "orange") == 0)
    {
        return 3;
    }
    else if (strcmp(col, "yellow") == 0)
    {
        return 4;
    }
    else if (strcmp(col, "green") == 0)
    {
        return 5;
    }
    else if (strcmp(col, "blue") == 0)
    {
        return 6;
    }
    else if (strcmp(col, "violet") == 0)
    {
        return 7;
    }
    else if (strcmp(col, "grey") == 0)
    {
        return 8;
    }
    else if (strcmp(col, "white") == 0)
    {
        return 9;
    }
}