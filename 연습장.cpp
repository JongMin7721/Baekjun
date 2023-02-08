#include <stdio.h>
int main()
{
	int A, B, C, D;
	scanf("%d %d\n%d", &A, &B, &C);
	if (B + C >= 60)
	{
		D = (B + C) / 60;

		if (A + D < 23)
		{
			printf("%d %d", A + D, B + C - (60 * D));
		}
		else if (A + D >= 23)
		{
			printf("%d %d", A + D - 24, B + C - (60 * D));
		}
	}
	else
	{
		printf("%d %d", A, B + C);
	}
	return 0;
}