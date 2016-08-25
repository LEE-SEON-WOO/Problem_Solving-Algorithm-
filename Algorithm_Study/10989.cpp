#include <cstdio>
#include <map>
using namespace std;

int main()
{
	int N;
	map<int, int> _map;
	scanf("%d", &N);
	int V;
	while (N--)
	{
		scanf("%d", &V);
		_map[V]++;
	}
	for (auto i : _map)
	{
		while (i.second--)
		{
			printf("%d\n", i.first);
		}
	}
}