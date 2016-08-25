#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	map<int, int> _map;
	int v;
	for (int i = 0; i < N; i++)
	{
		cin >> v;
		_map[v]++;
	}
	int s = 0;
	auto it = _map.begin();
	for (auto i = _map.begin()++; i != _map.end(); i++)
	{
		s = i->first + it->first;
		i->second--;
		it->second--;
		_map[s]++;
		if (i->second == 0)
			_map.erase(_map[i->first]);
		if (it->second == 0)
			_map.erase(_map[it->first]);
	}
	cout << s << "\n";
	return 0;
}