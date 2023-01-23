#include <stdio.h>
#include <string.h>

int recursion(const char *s, int l, int r);
int isPalindrome(const char *s);

int count;

int main()
{
    int n, cnt;
    char word[1001];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s", word);
        count = 0;
        cnt = isPalindrome(word);
        printf("%d %d\n", cnt, count);
    }

    return 0;
}

int recursion(const char *s, int l, int r)
{
    count += 1;
    if (l >= r)
        return 1;
    else if (s[l] != s[r])
        return 0;
    else
        return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char *s)
{
    return recursion(s, 0, strlen(s) - 1);
}