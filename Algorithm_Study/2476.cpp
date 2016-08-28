#include <iostream>
#include <map>
#include <queue>
#include <functional>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	priority_queue<int> pq;
	map<int, int> _map;
	while(N--)
	{
		_map.clear();
		int a, b, c;
		cin >> a >> b >> c;
		_map[a]++;
		_map[b]++;
		_map[c]++;
		switch (_map.size())
		{
		case 3:
			pq.push((_map.rbegin()->first) * 100);
			break;
		case 2:
			for (auto i = _map.begin(); i != _map.end(); i++)
				if (i->second == 2)
					pq.push(1000 + (i->first * 100));
			break;
		case 1:
			for (auto i = _map.begin(); i != _map.end(); i++)
				if (i->second == 3)
					pq.push(10000 + (i->first * 1000));
			break;
		}
	}
	cout << pq.top();
	return 0;
}