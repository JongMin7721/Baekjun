#include <stdio.h>
#include <string.h>

int main()
{
	char ary[101];
	scanf("%s", &ary);

	int size = 0;
	size = strlen(ary);

	int cnt = 0;
	if (size == 1)
		printf("0\n");
	for (int i = 1; i <= (size / 2); i++)
	{
		if (ary[size - i] == ary[i - 1])
		{
			cnt++;
			if (cnt == (size / 2))
				printf("1\n");
		}
		else
		{
			printf("0\n");
			break;
		}
	}
	return 0;
}
