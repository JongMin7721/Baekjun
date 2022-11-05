#include <stdio.h>
#include <string.h>

int main(void)
{
    int alpha[26] = {0};
    char word[100];

    scanf("%s", word);
    int n = strlen(word);

    for (int i = 0; i < n; i++)
    {
        if (!alpha[word[i] - 'a'])
        {
            alpha[word[i] - 'a'] = i + 1;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        printf("%d ", alpha[i] - 1);
    }

    return 0;
}