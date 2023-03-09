#include <stdio.h>
#include <string.h>

int LOVE1[4];
int LOVE2[4];
int score[50];

void cnt(char NAME[21], int LOVE[4]);

int main(void)
{
    char NAME[50][21];
    int n, max = -1, max_index = -1;

    scanf("%s\n%d", NAME, &n);

    cnt(NAME[0], LOVE1);

    for (int i = 0; i < n; i++)
    {
        scanf("%s", &NAME[i]);
        cnt(NAME[i], LOVE2);

        score[i] = 1;
        for (int j = 0; j < 3; j++)
        {
            for (int k = j + 1; k < 4; k++)
            {
                score[i] *= (LOVE1[j] + LOVE2[j]) + (LOVE1[k] + LOVE2[k]);
            }
        }

        score[i] %= 100;

        LOVE2[0] = LOVE2[1] = LOVE2[2] = LOVE2[3] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (max < score[i])
        {
            max = score[i];
            max_index = i;
        }
        else if (max == score[i])
        {
            if (strcmp(NAME[i], NAME[max_index]) < 0)
            {
                max_index = i;
            }
        }
    }

    printf("%s\n", NAME[max_index]);

    return 0;
}

void cnt(char NAME[21], int LOVE[4])
{
    int len = strlen(NAME);

    for (int i = 0; i < len; i++)
    {
        if (NAME[i] == 'L')
        {
            LOVE[0]++;
        }
        else if (NAME[i] == 'O')
        {
            LOVE[1]++;
        }
        else if (NAME[i] == 'V')
        {
            LOVE[2]++;
        }
        else if (NAME[i] == 'E')
        {
            LOVE[3]++;
        }
    }

    return;
}
