#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIV 1234567891

typedef long long int ll;

int compare(const void *first, const void *second);  // 비교
ll hashing(char word[], int len);                    // 해싱 //15829-Hashing //후 개선
int find_hashing(ll rhash[], ll find_hash, int len); // 이분탐색

int main(void)
{
    int N, M, wordlen, cnt = 0;
    ll hash[10000], find_hash;
    char word[502];

    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++)
    {
        scanf("%s", word);
        wordlen = strlen(word);

        hash[i] = hashing(word, wordlen);
    }

    qsort(hash, N, sizeof(hash[0]), compare);

    for (int i = 0; i < M; i++)
    {
        scanf("%s", word);
        wordlen = strlen(word);

        find_hash = hashing(word, wordlen);

        if (find_hashing(hash, find_hash, N))
        {
            cnt++;
        }
    }

    printf("%d\n", cnt);

    return 0;
}

int compare(const void *first, const void *second)
{
    if (*(int *)first > *(int *)second)
        return 1;
    else if (*(int *)first < *(int *)second)
        return -1;
    else
        return 0;
}

ll hashing(char word[], int len)
{
    ll sum = 0, hash[500];
    hash[0] = 1;
    for (int i = 1; i < len; i++)
    {
        hash[i] = (hash[i - 1] * 31) % DIV;
    }

    hash[0] += word[0] - 'a';

    for (int i = 1; i < len; i++)
    {
        hash[i] *= (word[i] - 'a' + 1);
        hash[i] %= DIV;
    }

    for (int i = 0; i < len; i++)
    {
        sum = (sum + hash[i]) % DIV;
    }

    return sum;
}

int find_hashing(ll rhash[], ll find_hash, int len)
{
    int middle = len / 2, start = 0, end = len;
    while (find_hash != rhash[middle])
    {
        if (middle == start)
        {
            return 0;
        }

        if (find_hash > rhash[middle])
        {
            start = middle;
        }
        else if (find_hash < rhash[middle])
        {
            end = middle;
        }

        middle = (start + end) / 2;
    }

    return 1;
}