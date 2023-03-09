#include <stdio.h>

int min(int a, int b);
int max(int a, int b);

int main(void)
{
    int w, l, h, con1, con2;

    scanf("%d %d %d", &w, &l, &h); // w:길이 l:너비 h:높이

    con1 = min(w, l) >= h * 2 ? 1 : 0;
    con2 = max(w, l) <= min(w, l) * 2 ? 1 : 0;

    printf("%s\n", con1 && con2 ? "good" : "bad");

    return 0;
}

int min(int a, int b)
{
    return a > b ? b : a;
}

int max(int a, int b)
{
    return a > b ? a : b;
}