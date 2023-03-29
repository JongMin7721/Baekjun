#include <stdio.h>

int main(void)
{
    int H, M, S, T_s, T_m, T_h;

    scanf("%d %d %d\n%d", &H, &M, &S, &T_s);

    T_m = (S + T_s) / 60;
    S = (S + T_s) % 60;

    T_h = (M + T_m) / 60;
    M = (M + T_m) % 60;

    H = (H + T_h) % 24;

    printf("%d %d %d\n", H, M, S);

    return 0;
}