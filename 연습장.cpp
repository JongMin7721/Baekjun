#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *left, const void *right)
{
	int *a = (int *)left;
	int *b = (int *)right;
	if (*a < *b)
		return -1;
	else if (*a > *b)
		return 1;
	else
		return 0;
}

int lowerBound(int *card, int key, int size)
{
	int left = 0;
	int right = size - 1;
	while (left < right)
	{
		int mid = (left + right) / 2;
		if (card[mid] <= key)
			right = mid;
		else
			left = mid + 1;
	}
	return right;
}

int upperBound(int *card, int key, int size)
{
	int left = 0;
	int right = size - 1;
	while (left < right)
	{
		int mid = (left + right) / 2;
		if (key < card[mid])
			right = mid;
		else
			left = mid + 1;
	}
	if (card[right] == key)
		return right + 1;
	return right;
}

int main(void)
{
	int N, M;
	// 입력받음
	scanf("%d", &N);
	int card[N];
	// 카드덱 생성
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &card[i]);
	}
	scanf("%d", &M);
	int key[M];
	qsort(card, N, sizeof(int), cmp);
	///
	for (int i = 0; i < M; i++)
	{
		scanf("%d", &key[i]);
	}
	for (int i = 0; i < M; i++)
	{
		int searchNum = key[i];
		int upper = upperBound(card, searchNum, N);
		int lower = lowerBound(card, searchNum, N);
		printf("%d ", upper - lower);
	}
	return 0;
}