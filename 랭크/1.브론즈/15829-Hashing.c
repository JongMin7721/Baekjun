#include <stdio.h>
#define M 1234567891

typedef long long int ll;

int main(void)
{
    int n;
    char words[51];
    ll hash[50], sum = 0;

    scanf("%d\n%s", &n, words);

    for (int i = 0; i < n; i++)
    {
        hash[i] = 1;
    }

    hash[0] = words[0] - 'a' + 1;

    for (int i = 1; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            hash[j] = (hash[j] * 31) % M;
        }

        hash[i] *= (words[i] - 'a' + 1);
        hash[i] %= M;
    }

    for (int i = 0; i < n; i++)
    {
        sum = (sum + hash[i]) % M;
    }

    printf("%lld\n", sum);

    return 0;
}