#include <iostream>
#include <cstring>
#include <map>
using namespace std;
map<int, int> _map;
int main()
{
	ios::sync_with_stdio(false);
	int N, M;
	cin >> N >> M;
	for (int i = 1; i <= N; i++)
	{
		_map[i] = 0;
	}
	int A, B;
	for (int i = 0; i < M; i++)
	{
		cin >> A >> B;
		_map[A]++;
		_map[B]++;
	}
	for (auto i : _map)
	{
		cout << i.second << "\n";
	}
	return 0;
}