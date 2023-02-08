#include <stdio.h>
#include <string.h>
int main(void)
{
	char s[1000001];
	fgets(s, sizeof(s), stdin);
	int a = strlen(s);
	int cnt = 0;
	int check = 0;
	for (int i = 0; i < a; i++)
	{
		if (s[i] != ' ' && s[i + 1] == ' ') // 공백체크
		{
			cnt++;
			check++;
		}
		if (s[i] != ' ' && s[i + 1] == 10) // 공백체크
		{
			cnt++;
			check++;
		}
		else
		{
			check = 0;
		}
	}
	printf("%d\n", cnt);
	return 0;
}