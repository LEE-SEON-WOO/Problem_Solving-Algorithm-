#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
bool graph[1001][1001];
bool visit[1001];
int N;
void dfs(int v)
{
	if (visit[v] == false)
		visit[v] = true;
	for (int i = 1; i <= N; i++)
	{
		if (graph[v][i] && !visit[i])
			dfs(i);
	}
}
int main()
{
	ios::sync_with_stdio(false);
	int M;
	cin >> N >> M;
	int u, v;
	for (int i = 0; i < M; i++)
	{
		cin >> u >> v;
		graph[u][v] = true;
		graph[v][u] = true;
	}
	int cnt = 0;
	memset(visit, false, sizeof(visit));
	for (int i = 1; i <= N; i++)
	{
		if (!visit[i])
		{
			cnt++;
			dfs(i);
		}
	}
	cout << cnt << "\n";
	return 0;
}