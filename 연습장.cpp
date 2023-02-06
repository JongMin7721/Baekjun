#include <stdio.h>
#include <string.h>

int main(void)
{
	int N, i = 0, len;
	char num[10] = "666"; // 초기값 666설정

	scanf("%d", &N);

	for (int j = 3; j < 10; j++)
	{
		num[j] = '0'; // 그 외의 값 0으로 초기화
	}

	while (i != N) // N번째 찾기
	{
		len = strlen(num);

		for (int j = 0; j < len - 2; j++) // 666이 있다면 갯수추가
		{
			if (num[j] == num[j + 1] && num[j + 1] == num[j + 2] && num[j] == '6')
			{
				i++;
				break;
			}
		}

		if (i == N) // N번째 찾으면 루프나가기
		{
			break;
		}

		num[0]++; // 1더하기

		for (int j = 0; j < len; j++) // 자릿수 올림 9+1 = 10
		{
			if (num[j] == (10 + '0'))
			{
				num[j] -= 10;
				num[j + 1]++;
			}
		}
	}

	char res[10]; // 문제의 배열

	for (i = 0; i < 10; i++) // 666000 -> 000666
	{
		res[i] = num[9 - i];
	}

	printf("%s\n", res);
	//00000006666660000000
}