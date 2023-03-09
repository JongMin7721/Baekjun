#include <stdio.h>

void prt_max(int A, int B, int G);

int main(void)
{
    int N, sc_A = 0, sc_B = 0, sc_G = 0;
    char prob[101], *Adrian = "ABC", *Bruno = "BABC", *Goran = "CCAABB";

    scanf("%d\n%s", &N, prob);

    for (int i = 0; i < N; i++)
    {
        if (prob[i] == Adrian[i % 3])
        {
            sc_A++;
        }

        if (prob[i] == Bruno[i % 4])
        {
            sc_B++;
        }

        if (prob[i] == Goran[i % 6])
        {
            sc_G++;
        }
    }

    prt_max(sc_A, sc_B, sc_G);

    return 0;
}

void prt_max(int A, int B, int G)
{
    if (A == B)
    {
        if (B == G)
        {
            printf("%d\nAdrian\nBruno\nGoran\n", A);
        }
        else if (B > G)
        {
            printf("%d\nAdrian\nBruno\n", A);
        }
        else
        {
            printf("%d\nGoran\n", G);
        }
    }
    else if (A > B)
    {
        if (A == G)
        {
            printf("%d\nAdrian\nGoran\n", A);
        }
        else if (B >= G || A > G)
        {
            printf("%d\nAdrian\n", A);
        }
        else if (A < G)
        {
            printf("%d\nGoran\n", G);
        }
    }
    else // A < B
    {
        if (B == G)
        {
            printf("%d\nBruno\nGoran\n", B);
        }
        else if (A >= G || B > G)
        {
            printf("%d\nBruno\n", B);
        }
        else if (B < G)
        {
            printf("%d\nGoran\n", G);
        }
    }
}
