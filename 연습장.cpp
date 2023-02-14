#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char **argv)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, x;
	int temp = 0, sum = 0, count = 0;
	cin >> n;
	int arr[n] = {0};
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		arr[i] = x;
		if (x >= temp)
			temp = x;
	}

	printf("\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	x = temp;
	int arr2[x + 1] = {0};
	for (int x : arr)
		arr2[x] = 1;
	arr2[1] = 0;

	printf("\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	int a = sqrt(x);
	for (int i = 2; i <= a; i++)
	{ // 문제가 발생하는 5번
		for (int j = 2; j * i <= x; j++)
		{
			arr2[j * i] = 0;

			printf("%d %d\n", i, j);
			for (int i = 0; i < n; i++)
			{
				printf("%d ", arr[i]);
			}
			printf("\n");
			for (int i = 0; i < n; i++)
			{
				printf("%d ", arr2[i]);
			}
			printf("\n");
		}
	}

	printf("1111111\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	for (int i = 0; i < n; i++)
	{
		if (arr2[arr[i]] == 1)
			count++;
	}
	// cout << count;

	printf("\n");
	for (int i = 0; i <= n; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
