#include <stdio.h>

int main(void)
{

	int K;
	int Q;
	int L;
	int B;
	int N;
	int P;
	scanf("%d %d %d  %d %d %d", &K, &Q, &L, &B, &N, &P);

	printf("%d"
		   "%2d"
		   "%2d"
		   "%2d"
		   "%2d"
		   "%2d",
		   1 - K, 1 - Q, 2 - L, 2 - B, 2 - N, 8 - P);

	return 0;
}