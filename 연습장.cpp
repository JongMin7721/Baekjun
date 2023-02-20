#include <iostream>
#include <algorithm>

using namespace std;

int compare(const void *a, const void *b)
{
	int *x = (int *)a;
	int *y = (int *)b;

	if (*x > *y)
		return 1;
	else if (*x < *y)
		return -1;
	else
		return 0;
}

int myFind(int *arr, int left, int right, int n)
{
	int mid;

	while (left < right)
	{
		mid = (left + right) / 2;

		if (*(arr + mid) == n)
		{
			return 1;
		}
		else if (*(arr + mid) > n)
		{
			right = mid;
		}
		else
		{
			left = mid + 1;
		}
	}

	return 0;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int size, n;
	cin >> size;

	int *arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		cin >> n;
		*(arr + i) = n;
	}

	qsort(arr, size, sizeof(int), compare);

	int nCheck;
	cin >> nCheck;
	while (nCheck-- > 0)
	{
		cin >> n;
		cout << myFind(arr, 0, size, n) << '\n';
	}

	return 0;
}