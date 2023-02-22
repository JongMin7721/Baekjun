#include <stdio.h>

char arr[60];
char stack[60];
main(void)
{
	int i; // 반복문
	int j;
	int n;	 // 반복 횟수
	int idx; // 가장 마지막 데이터값 위치

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		idx = 0;
		scanf("%s", arr);
		for (j = 0; j < sizeof(arr) / sizeof(char); j++)
		{
			if (arr[j] == '(')
			{
				stack[idx] = '(';
				idx++;
			}
			else if (arr[j] == ')')
			{
				if (idx == 0)
				{
					idx++;
					break;
				}
				else
				{
					idx--;
					stack[idx] = '\0';
				}
			}
		}
		if (idx == 0)
			printf("YES\n");
		else
			printf("NO\n");
	}
}