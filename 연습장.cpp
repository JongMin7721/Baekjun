#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_integer(void)
{
	int n;
	scanf("%d", &n);

	return n;
}

void quickSort(int arr[], int start, int end)
{
	if (start >= end)
	{
		return;
	}

	int L = start + 1, R = end;
	int pivot = start;
	int temp;

	while (R >= L)
	{
		while (L <= end && arr[L] <= arr[R])
			L++;
		while (R > start && arr[R] >= arr[pivot])
			R--;

		if (L <= R)
		{
			temp = arr[L];
			arr[L] = arr[R];
			arr[R] = temp;
		}
		else
		{
			temp = arr[pivot];
			arr[pivot] = arr[R];
			arr[R] = temp;
		}
	}

	quickSort(arr, start, R - 1);
	quickSort(arr, R + 1, end);
}

int main()
{
	/*int T = 0;
	T = get_integer();
	int* num = (int*)malloc(sizeof T);*/

	int num[5];
	for (int i = 0; i < 5; i++)
	{
		num[i] = get_integer();
	}

	int sum = 0;
	int avg = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += num[i];
	}
	avg = sum / 5;

	quickSort(num, 0, 4);

	printf("%d\n%d", avg, num[2]);

	return 0;
}
