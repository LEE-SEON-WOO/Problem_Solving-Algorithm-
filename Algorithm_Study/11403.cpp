#include <iostream>
#include <cstring>
using namespace std;

bool graph[101][101];
int main()
{
	memset(graph, 0, sizeof(graph));
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> graph[i][j];
		}
	}

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			for (int k = 0; k < N; k++)
				if (graph[j][i] && graph[i][k])
					graph[j][k] = 1;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << graph[i][j] << ' ';
		}cout << endl;
	}
	return 0;
}