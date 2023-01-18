#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
    int n = 0, i = 0, toggle = 1, count = 0;
    char word[101];
    scanf("%d", &n);

    for (int k = 0; k < n; k++)
    {
        scanf("%s", word);
        for (int i = 0; i < strlen(word); i++)
        {
            for (int j = 1; j < strlen(word); j++)
            {
                if (word[i] == word[j])
                {
                    if (j - i == 1 || j - i == 0 || j - i == -1)
                    {
                        toggle = 1;
                    }
                    else
                    {
                        toggle = 0;
                        break;
                    } // 같은 알파벳이 있되 그것이 연속된 값이 아니라면 toggle을 0으로 초기화
                }
            }
            if (toggle == 0)
                break;
        }
        if (toggle == 1)
            count++;
        else
            toggle = 1;
    }
    printf("%d", count);
    return 0;
}