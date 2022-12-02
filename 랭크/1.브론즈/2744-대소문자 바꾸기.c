#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) // 2744번
{
    char a[100], n;

    scanf("%s", &a);

    n = strlen(a);
    for (int i = 0; i < n; i++)
    {
        if (isupper(a[i]))
        {
            a[i] = tolower(a[i]);
        }
        else if (islower(a[i]))
        {
            a[i] = toupper(a[i]);
        }
    }

    printf("%s", a);

    return 0;
}