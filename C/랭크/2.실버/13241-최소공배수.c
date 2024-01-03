#include <stdio.h>

int GCD(int N, int M){
    if (N % M == 0)
    {
        return M;
    }else {
        return GCD(M, N % M);
    }
}

int main(void){
    long long int n, m;

    scanf("%lld %lld", &n, &m);

    long long int res = 1;

    printf("%lld\n", res = n * m / GCD(n, m));

    return 0;
}