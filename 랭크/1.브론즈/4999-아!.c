#include <stdio.h>

int main(void)
{
    char ahh[1000], dahh[1000];

    scanf("%s\n%s", ahh, dahh);

    for (int i = 0; i < 1000; i++)
    {
        if (dahh[i] == 'h' || (ahh[i] == 'h' && dahh[i] == 'h'))
        {
            printf("go\n");
            break;
        }
        else if (ahh[i] == 'h')
        {
            printf("no\n");
            break;
        }
    }

    return 0;
}