#include <iostream>
#include <map>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	map<int, int> _map;
	int N, v;
	cin >> N;
	while (N--)
	{
		cin >> v;
		if (v == 0)
		{
			if (_map.empty())
			{
				cout << 0 << "\n";
			}
			else
			{
				cout << _map.begin()->first <<"\n";
				_map.begin()->second--;
				if (_map.begin()->second == 0)
				{
					_map.erase(_map.begin());
				}
			}
		}
		else
		{
			_map[v]++;
		}
	}

	return 0;
}