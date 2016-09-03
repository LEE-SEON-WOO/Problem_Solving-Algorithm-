#include <map>
#include <cstdio>
using namespace std;

map<int, int> _map;
int main()
{
	int N;
	scanf("%d", &N);
	int v;
	for (int i = 0; i<N; i++)
	{
		scanf("%d", &v);
		_map[v]++;
	}
	int M;
	scanf("%d", &M);
	for (int i = 0; i<M; i++)
	{
		scanf("%d", &v);
		printf("%d ", _map[v]);
	}
	return 0;
}