#include <iostream>
#include <cstring>
using namespace std;

struct km {
	int height;
	int weight;
	int rank;
}typedef k;
int main()
{
	ios::sync_with_stdio(false);
	int x, y;
	int N;
	cin >> N;
	k m[51];
	memset(m, 0, sizeof(m));
	for (int i = 0; i < N; i++)
	{
		cin >> m[i].height >> m[i].weight;
	}
	for (int i = 0; i <= N; i++)
	{
		int cnt = 1;
		for (int j = 0; j <= N; j++)
		{
			if (m[j].height > m[i].height && m[j].weight > m[i].weight)
			{
				cnt++;
			}
		}
		m[i].rank = cnt;
	}
	for (int i = 0; i < N; i++)
	{
		cout << m[i].rank << ' ';
	}
	return 0;
}