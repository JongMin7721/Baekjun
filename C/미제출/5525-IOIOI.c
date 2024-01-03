#include <stdio.h>

int main(void)
{
    int N, M, cnt, ans = 0;
    char word[1000002];

    scanf("%d\n%d\n%s", &N, &M, word);

    for (int i = 0; i < M - (N * 2); i++)
    {
        if (word[i] == 'I')
        {
            cnt = 0;
            for (int j = i + 1; j < i + N * 2 + 1; j++)
            {
                if ((word[j] == 'I' && !((j - i) % 2)) || (word[j] == 'O' && ((j - i) % 2)))
                {
                    cnt++;
                }
                else
                {
                    break;
                }

                if (cnt == N * 2)
                {
                    ans++;
                    break;
                }
            }
        }
    }

    printf("%d\n", ans);

    return 0;
}