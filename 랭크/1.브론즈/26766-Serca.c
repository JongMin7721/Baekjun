#include <stdio.h>

void p_heart();

int main(void)
{
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        p_heart();
    }

    return 0;
}

void p_heart()
{
    printf(" @@@   @@@ \n@   @ @   @\n@    @    @\n@         @\n @       @ \n  @     @  \n   @   @   \n    @ @    \n     @     \n");

    return;
}