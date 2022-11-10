#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) // 1316번
{
    int n, m, final = 0;

    scanf("%d", &n);

    char **word = (char **)malloc(sizeof(char *) * n);

    for (int i = 0; i < n; i++)
    {
        word[i] = (char *)malloc(sizeof(char) * 100);
        scanf("%s", word[i]);
        m = strlen(word[i]);
        int alpha[26] = {0};

        for (int j = 0; j < m; j++)
        {
            if (j == 0)
            {
                alpha[(int)word[i][j] - 'a']++;
            }
            else if (word[i][j - 1] == word[i][j])
            {
                alpha[(int)word[i][j] - 'a']++;
            }
            else
            {
                if (alpha[(int)word[i][j] - 'a'] > 0)
                {
                    final++;
                    break;
                }
                else
                {
                    alpha[(int)word[i][j] - 'a']++;
                }
            }
        }
    }

    printf("%d", n - final);

    return 0;
}