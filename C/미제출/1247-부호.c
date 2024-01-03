#include <stdio.h>

typedef long long int ll;

int main(void)
{
    int N;
    ll sum, inp;

    for (int i = 0; i < 3; i++)
    {
        scanf(" %d", &N);
        sum = 0;
        for (int i = 0; i < N; i++)
        {
            scanf(" %lld", &inp);
            sum += inp;
        }

        printf("%c\n", (sum > 0 ? '+' : (sum == 0 ? '0' : '-')));
    }

    return 0;
}