#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[50];

    scanf("%s", word);

    if (!strcmp(word, "NLCS"))
    {
        printf("North London Collegiate School\n");
    }
    else if (!strcmp(word, "BHA"))
    {
        printf("Branksome Hall Asia\n");
    }
    else if (!strcmp(word, "KIS"))
    {
        printf("Korea International School\n");
    }
    else if (!strcmp(word, "SJA"))
    {
        printf("St. Johnsbury Academy\n");
    }

    return 0;
}