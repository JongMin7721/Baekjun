#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	int a = 0, b = 0, c = 0, prize = 0;

	cin >> a >> b >> c;
	if (a > 0 && a <= 6 && b > 0 && b <= 6 && c > 0 && c <= 6)
	{

		if (a == b && b == c)
		{
			prize = 10000 + a * 1000;
		}

		else if (a == b)
		{
			prize = 1000 + a * 100;
		}
		else if (b == c)
		{
			prize = 1000 + b * 100;
		}
		else if (c == a)
		{
			prize = 1000 + c * 100;
		}

		else if (a != b && b != c && c != a)
		{
			if (a > b)
			{
				if (c > a)
				{

					prize = c * 100;
				}
				else if (c < a)
				{
					prize = a * 100;
				}
			}
		}
		
		else if (b < a)
		{
			if (a > c)
			{
				prize = a * 100;
			}
			else if (c > a)
			{
				prize = c * 100;
			}
		}
		cout << prize;
		return 0;
	}
}