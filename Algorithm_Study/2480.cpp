#include <map>
#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	map<int, int> _map;
	int d1, d2, d3;
	cin >> d1 >> d2 >> d3;
	_map[d1]++; _map[d2]++; _map[d3]++;
	
	switch (_map.size())
	{
	case 1:
		cout << 10000 + _map.begin()->first * 1000;
		break;
	case 2:
		for (auto i = _map.begin(); i != _map.end(); i++)
		{
			if (i->second == 2)
				cout << 1000 + i->first * 100;
		}
		break;
	case 3:
		cout << _map.rbegin()->first * 100;
		break;
	}
	return 0;
}