#include <stdio.h>

int main(void)
{
    long Hhp, Hatk, Dhp, Datk, P, S;
    int n;

    scanf("%ld %ld %ld %ld", &Hhp, &Hatk, &Dhp, &Datk);
    scanf("%ld %ld", &P, &S);

    if (Dhp <= Hatk)
    {
        printf("Victory!\n");
        return 0;
    }
    else if (Hhp <= Datk)
    {
        printf("gg\n");
        return 0;
    }

    if (Hhp / Datk < (Dhp - P) / Hatk)
    {
        n = Hhp / Datk;
    }
    else
    {
        if ((Dhp - P) % Hatk > 0)
        {
            n = (Dhp - P) / Hatk + 1;
        }
        else
        {
            n = (Dhp - P) / Hatk;
        }

        Hhp -= Datk * n;
        Dhp -= Hatk * n;
        Dhp += S;

        if (Hhp / Datk < Dhp / Hatk)
        {
            n = Hhp / Datk;
        }
        else
        {
            n = Dhp / Hatk;
        }

        if (Dhp % Hatk > 0)
        {
            n++;
        }
    }

    if (Dhp - Hatk * n <= 0)
    {
        printf("Victory!\n");
    }
    else if (Hhp - Datk * n <= 0)
    {
        printf("gg\n");
    }

    return 0;
}