#include <iostream>

using namespace std;

int main()
{
	int a, b, v;

	cin >> a >> b >> v;

	int h = v - a;	 // 전체거리 - A
	int win = a - b; // 하루동안 최종 이동 거리
	int days = 0;

	if (h < win)
	{ //(전체거리-A) < (낮~밤 이동 거리)
		days = 2;
	}
	else if (h % win == 0)
	{ // 낮에 한번만 더 올라가면 되는 경우
		days = h / win + 1;
	}
	else if (h % win != 0)
	{ // 이틀 더 올라가야 하는 경우
		days = h / win + 2;
	}

	cout << days << "\n";
}
