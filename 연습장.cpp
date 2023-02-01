#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include <math.h>

int compare(const void *a, const void *b)
{
	int num1 = *(int *)a;
	int num2 = *(int *)b;

	if (num1 < num2)
		return -1;

	if (num1 > num2)
		return 1;

	return 0;
}

void sansul(int list[], int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += (list[i]);
	}
	printf("%d\n", (int)round(sum / n));
}

void middle(int list[], int n)
{
	if (n == 1)
		printf("%d\n", list[0]);
	else
		printf("%d\n", list[n / 2]);
}

void max_value(int list[], int n)
{
	int a[8001] = {
		0,
	};
	int max = 0;
	int idx;
	int count = 0;
	int i;

	for (i = 0; i < n; i++)
	{
		idx = list[i] + 4000;
		a[idx] += 1;

		if (a[idx] > max)
			max = a[idx];
	}
	for (i = 0, idx = 0; i < 8001; i++)
	{
		if (a[i] == 0)
			continue;
		if (a[i] == max)
		{
			if (count == 0)
			{
				idx = i;
				count++;
			}
			else if (count == 1)
			{
				idx = i;
				break;
			}
		}
	}
	printf("%d\n", idx - 4000);
}

void length(int list[], int n)
{
	printf("%d\n", list[n - 1] - list[0]);
}

int main()
{
	int n;
	scanf("%d", &n);
	int *a = (int *)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	qsort(a, n, sizeof(a[0]), compare);
	sansul(a, n);
	middle(a, n);
	max_value(a, n);
	length(a, n);
}