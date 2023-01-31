#include <iostream>
using namespace std;
int c[8];
bool palndorm(int a)
{
	int count = 0;
	while (true)
	{
		if (a < 1)
		{
			break;
		}
		c[count] = a % 10;
		a = a / 10;
		count++;
	}
	if (count == 1)
	{
		return true;
	}
	if (count % 2 == 0)
	{
		for (int i = 1; i < count / 2 + 1; i++)
		{
			if (c[i - 1] != c[count - i])
			{
				return false;
			}
		}
	}
	else
	{
		for (int i = 1; i < count / 2 - 1; i++)
		{
			if (c[i - 1] != c[count - i + 1])
			{
				return false;
			}
		}
	}
	return true;
}
int main()
{
	int a;
	while (cin >> a)
	{
		if (a == 0)
		{
			break;
		}
		if (palndorm(a))
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "no" << endl;
		}
	}
}
