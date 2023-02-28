#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> v(n + 1);
	for (auto i = 1; i <= n; ++i)
		v[i] = i;

	for (auto t = 0; t < m; ++t)
	{
		int i, j;
		cin >> i >> j;

		for (auto y = 0; y <= (j - i) / 2; ++y)
		{
			int tmp;
			tmp = v[i];
			v[i] = v[j];
			v[j] = tmp;
			j--;
			i++;
		}

		for (auto i = 1; i <= n; ++i)
			cout << v[i] << " ";

		cout << "\n";
	}

	for (auto i = 1; i <= n; ++i)
		cout << v[i] << " ";
}