#include <stdio.h>

int main()
{
	int mat[9][9];
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			scanf("%d", &mat[i][j]);
		}
	}

	int max = mat[0][0];
	int a = -1;
	int b = -1;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (max < mat[i][j])
			{
				max = mat[i][j];
				a = i + 1;
				b = j + 1;
			}
		}
	}

	printf("%d\n", max);
	printf("%d %d", a, b);

	return 0;
}