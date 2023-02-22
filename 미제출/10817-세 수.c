#include <stdio.h>

int main(void)
{
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    printf("%d\n", (A >= B && B >= C) ? B : ((B >= C && C >= A) ? C : A));

    return 0;
}