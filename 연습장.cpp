#include <stdio.h>

int sigma(int n)
{
	return n * (n + 1) / 2;
}

int main()
{
	int nume[10000000];
	int deno[10000000];
	int idx = 0, i = 1;
	int X;
	scanf("%d", &X);

	while (1)
	{
		if (sigma(i - 1) < X)
		{
			if (X <= sigma(i))
			{
				idx = i;
				break;
			}
		}
		i++;
	}

	for (int i = sigma(idx - 1) + 1; i <= sigma(idx); i++)
	{
		if (idx % 2 == 0)
		{
			nume[i] = 1 + (i - sigma(idx - 1) - 1);
			deno[i] = idx - (i - sigma(idx - 1) - 1);
		}

		else if (idx % 2 == 1)
		{
			nume[i] = idx - (i - sigma(idx - 1) - 1);
			deno[i] = 1 + (i - sigma(idx - 1) - 1);
		}
	}

	printf("%d/%d", nume[X], deno[X]);
	return 0;
}