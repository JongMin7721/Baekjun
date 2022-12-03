#include <stdio.h>

int main(void) // 2754번
{
    char a[3];
    float g_score, p_score, final;

    scanf("%s", &a);

    switch (a[0])
    {
    case 'A':
        g_score = 4;
        break;
    case 'B':
        g_score = 3;
        break;
    case 'C':
        g_score = 2;
        break;
    case 'D':
        g_score = 1;
        break;
    case 'F':
        g_score = -1;
        break;
    default:
        g_score = -1;
        break;
    }

    switch (a[1])
    {
    case '+':
        p_score = 0.3;
        break;
    case '-':
        p_score = -0.3;
        break;
    case '0':
        p_score = 0;
        break;
    default:
        break;
    }

    final = g_score != -1 ? g_score + p_score : 0;

    printf("%.1lf\n", final);

    return 0;
}