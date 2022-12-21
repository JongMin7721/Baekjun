#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) // 문자열 이용하여 풀기 // 다음에 풀기
{
    char bignum[1001], smallnum[1001], res[1001];
    scanf("%s %s", &bignum, &smallnum);
    int l = strlen(smallnum), ll = strlen(bignum), lnl = ll - l;

    for (int i = 0; i < lnl; i++)
    {
        /* code */
    }

    printf("%d %s\n", atoi(bignum) - atoi(smallnum), smallnum);
    printf("%s", bignum);

    return 0;
}