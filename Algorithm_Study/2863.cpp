#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	double arr[2][2];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> arr[i][j];
		}
	}
	pair<double, int> res[4];
	res[0].first = arr[0][0] / arr[1][0] + arr[0][1] / arr[1][1];
	res[0].second = 0;
	res[1].first = arr[1][0] / arr[1][1] + arr[0][0] / arr[0][1];
	res[1].second = 1;
	res[2].first = arr[1][1] / arr[0][1] + arr[1][0] / arr[0][0];
	res[2].second = 2;
	res[3].first = arr[0][1] / arr[0][0] + arr[1][1] / arr[1][0];
	res[3].second = 3;
	//00 01  10 00  11 10  01 11
	//10 11  11 01  01 00  00 10
	//for (int i = 0; i < 4; i++)
	//	cout << "res[" << i << "]=" << res[i].first << "\n";
	for (int i = 4; i > 0; i--)
	{
		for (int j = 0; j < i-1; j++)
		{
			if (res[j].first < res[j+1].first)
				swap(res[j], res[j+1]);
			if (res[j].first == res[j+1].first)
			{
				if (res[j].second > res[j+1].second)
					swap(res[j].second, res[j+1].second);
			}
		}
	}
	cout << res[0].second << "\n";
	return 0;
}