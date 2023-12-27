#include <stdio.h>

int GCD(int N, int M){
    if (N % M == 0)
    {
        return M;
    }else{
        return GCD(M, N % M);
    }
}

int main(void){
    int n1, n2, m1, m2;

    scanf("%d %d\n %d %d", &n1, &m1, &n2, &m2);

    int N, M, G;

    N = n1 * m2 + m1 * n2;
    M = m1 * m2;

    G = GCD(N, M);
    printf("%d %d\n", N / G, M / G);

    return 0;
}