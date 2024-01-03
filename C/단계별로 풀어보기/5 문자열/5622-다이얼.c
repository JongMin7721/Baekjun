#include <stdio.h>
#include <string.h>

int main(void) // 5622번
{
    char word[16];
    int n, sum = 0;

    scanf("%s", word);

    n = strlen(word);

    for (int i = 0; i < n; i++)
    {
        if (word[i] <= 'C' && word[i] >= 'A')
        {
            sum += 2;
        }
        else if (word[i] <= 'F' && word[i] >= 'D')
        {
            sum += 3;
        }
        else if (word[i] <= 'I' && word[i] >= 'G')
        {
            sum += 4;
        }
        else if (word[i] <= 'L' && word[i] >= 'J')
        {
            sum += 5;
        }
        else if (word[i] <= 'O' && word[i] >= 'M')
        {
            sum += 6;
        }
        else if (word[i] <= 'S' && word[i] >= 'P')
        {
            sum += 7;
        }
        else if (word[i] <= 'V' && word[i] >= 'T')
        {
            sum += 8;
        }
        else if (word[i] <= 'Z' && word[i] >= 'W')
        {
            sum += 9;
        }
    }
    sum += n;

    printf("%d\n", sum);

    return 0;
}