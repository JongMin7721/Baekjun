#include <stdio.h>
int main(void)
{
	for (int n;;)
	{
		scanf("%d", &n);
		if (n == 0)
			break;
		else if (1 <= n < 10)
			printf("yes\n");
		else if (10 <= n < 100)
		{
			if (n % 10 == n / 10)
				printf("yes\n");
			else
				printf("no\n");
		}
		else if (100 <= n < 1000)
		{
			if (n % 10 == n / 100)
				printf("yes\n");
			else
				printf("no\n");
		}
		else if (1000 <= n < 10000)
		{
			if ((n % 10 == n / 1000) && (n % 100 / 10 == n % 1000 / 100))
				printf("yes\n");
			else
				printf("no\n");
		}
		else if (10000 <= n < 100000)
		{
			if ((n % 10 == n / 10000) && (n % 100 / 10 == n % 10000 / 1000))
				printf("yes\n");
			else
				printf("no\n");
		}
		else if (100000 <= n < 1000000)
		{
			if ((n % 10 == n / 100000) && (n % 100 / 10 == n % 100000 / 10000) && (n % 1000 / 100 == n % 10000 / 1000))
				printf("yes\n");
			else
				printf("no\n");
		}
	}
	return 0;
}