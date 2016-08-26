#include <iostream>
#include <map>
using namespace std;
int main()
{
	map<int, int> _map;
	ios::sync_with_stdio(false);
	int A;
	for (int i = 0; i < 10; i++)
	{
		cin >> A;
		_map[A % 42]++;
	}
	cout << _map.size();
	return 0;
}