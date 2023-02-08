#include <stdio.h>
#include <string.h>
int main(void)
{
	char s[101];
	int a, b;		// s 문자 갯수
	int count1 = 0; // 2개짜리 c-,c=
	int count2 = 0; // 3개짜리 dz=
	fgets(s, sizeof(s), stdin);
	a = strlen(s) - 1;
	for (int i = 1; i < a; i++)
	{
		if (s[i] == '=')
		{
			if (s[i - 1] == 'z' && s[i - 2] == 'd')
				count2++;
			else if (s[i - 1] == 'z')
				count1++;
			else if (s[i - 1] == 'c' || s[i - 1] == 's')
				count1++;
		}
		if (s[i] == '-')
		{
			if (s[i - 1] == 'd' || s[i - 1] == 'c')
				count1++;
		}
		if (s[i] == 'j')
		{
			if (s[i - 1] == 'l' || s[i - 1] == 'n')
				count1++;
		}
	}
	b = (count1 * 2) + (count2 * 3);
	printf("%d", (a - b) + count1 + count2);
	return 0;
}