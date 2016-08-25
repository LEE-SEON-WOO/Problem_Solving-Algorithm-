#include <iostream>
#include <map>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	map<int, int> _map;
	int N,v;
	cin >> N;
	while (N--)
	{
		cin >> v;
		_map[v]++;
	}
	int a;
	cin >> a;
	cout << _map[a] << "\n";
	return 0;
}