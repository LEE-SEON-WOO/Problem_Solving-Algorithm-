#include <iostream>
#include <map>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	map<int, int> _mapX;
	map<int, int> _mapY;
	int N;
	for (int i = 0; i < 3; i++)
	{
		cin >> N;
		_mapX[N]++;
		cin >> N;
		_mapY[N]++;
	}
	int X, Y;
	for (auto i:_mapX)
	{
		if (i.second == 1)
			X = i.first;
	}
	for (auto i : _mapY)
	{
		if (i.second == 1)
			Y = i.first;
	}
	cout << X << ' ' << Y;
	return 0;
}