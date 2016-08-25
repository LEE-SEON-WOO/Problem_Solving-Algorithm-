#include <iostream>
#include <map>
using namespace std;
map<int, int> _map;
int main()
{
	ios::sync_with_stdio(false);
	int N;
	for (int i = 0; i < 10; i++)
	{
		cin >> N;
		_map[N]++;
	}
	int S = 0, C = 0;
	int Min = -1;
	int M = 0;
	for (auto i : _map)
	{
		if (i.second > Min)
		{
			Min = i.second;
			M = i.first;
		}
		S += (i.first*i.second);
	}
	cout << S / 10 << "\n" << M << "\n";
	return 0;
}