#include <stdio.h> 
#include <string.h>

int main() {
	while(1)
	{
		char find, sen[251] = { 0 };
		scanf("%c",&find);
		if (find == '#')
			return 0;

		fgets(sen, 251, stdin);
		int len = strlen(sen);
		int ans = 0;
		for (int i = 0; i < len; i++)
		{
			if ('a' <= find && find <= 'z')
			{
				if (sen[i] == find || sen[i] == find - 32)
					ans++;
			}
		}
		printf("%c %d\n", find, ans);
	}

}
