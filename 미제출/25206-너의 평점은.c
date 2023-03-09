#include <stdio.h>
#include <string.h>

double check_score(double grade, char score[4]);

int main(void)
{
    char sen[52], score[4];
    double grade, sum = 0, cnt = 0;

    for (int i = 0; i < 20; i++)
    {
        scanf("%s %lf %s", sen, &grade, score);

        if (!strcmp(score, "P"))
        {
            continue;
        }
        cnt += grade;
        sum += check_score(grade, score);
    }

    printf("%.6lf\n", sum / cnt);

    return 0;
}

double check_score(double grade, char score[4])
{
    double g = 0;
    switch (score[0])
    {
    case 'A':
        if (score[1] == '+')
        {
            g = 4.5;
        }
        else if (score[1] == '0')
        {
            g = 4;
        }
        break;
    case 'B':
        if (score[1] == '+')
        {
            g = 3.5;
        }
        else if (score[1] == '0')
        {
            g = 3;
        }
        break;
    case 'C':
        if (score[1] == '+')
        {
            g = 2.5;
        }
        else if (score[1] == '0')
        {
            g = 2;
        }
        break;
    case 'D':
        if (score[1] == '+')
        {
            g = 1.5;
        }
        else if (score[1] == '0')
        {
            g = 1;
        }
        break;
    case 'F':
        return 0;

    default:
        break;
    }

    return g * grade;
}