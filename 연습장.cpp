#include <stdio.h>
int main()
{
	int n, m, arr[500001] = {0};
	scanf("%d %d", &n, &m);
	for (int i = 2; i <= m; i++)
	{
		for (int j = 2; j * i <= m && j * i >= n; j++)
			arr[i * j] = 1;
	}
	arr[1] = 1;

	for (int i = n; i <= m; i++)
	{
		if (!arr[i])
			printf("%d\n", i);
	}
	return 0;
}