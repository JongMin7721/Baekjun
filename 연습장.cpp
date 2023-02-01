#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 81

int main(void)
{
	int c = 0; // case

	int sum_O[SIZE];	 // X면 0,O면 증가시킨값 더하기를 각 배열요소에 집어 넣기 위한 배열
	int sum_score[SIZE]; // 각 케이스별 배열의 합

	char yes_no[SIZE] = " ";

	scanf("%d", &c);

	for (int i = 0; i < c; i++)
	{
		// 각 케이스 별(예를들어 i=0일때) 배열에 o,x값 입력(scanf는 띄워쓰기를 하면 버퍼(%s)에 띄워쓰기 전까지의 값을 넣어버림)
		scanf("%s", yes_no);
		// sum_O의 배열요소는 1부터 시작하므로 [0]은 0으로 초기화 시켜준다.
		sum_O[0] = {0};
		// o,x를 구분하기 위해 배열 전체 조사를 위한 반복문(배열요소1부터 시작->전의 직전 배열 요소의 값과 현재값과의 합을 위함)

		int len = strlen(yes_no); // 문자열의 길이를 구하기위하여(시간초과 오류는 아님)

		for (int j = 1; j < len ; j++)
		{

			if (yes_no[j] == 'O')
			{
				sum_O[j] = sum_O[j - 1] + 1;
			}
			else if (yes_no[j] == 'X')
			{
				sum_O[j] = 0;
			}
		}
		// 각 케이스별 총합 구하기
		for (int j = 1; j < len + 1; j++)
		{
			sum_score[i] += sum_O[j];
		}
		// 다음 케이스를 위하여 배열 초기화(문자열은 '\0'로 초기화 해준다)
		yes_no[0] = '\0';
	}

	for (int i = 0; i < c; i++)
		// 각 케이스 별 구한 결과의 합 출력하기
		printf("%d\n", sum_score[i]);

	return 0;
}