#include <stdio.h>

float get_score(char a[2]);

int main(void) // 2755번
{
    char a[3], b[100];
    int n, grade, f_grade = 0;
    float res = 0, final = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %s", &b, &grade, &a);
        final += get_score(a) * grade;
        f_grade += grade;
    }

    res = final / f_grade;

    printf("%.2lf\n", res);

    return 0;
}

float get_score(char a[2])
{
    float g_score, p_score;
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

    return g_score != -1 ? g_score + p_score : 0;
}