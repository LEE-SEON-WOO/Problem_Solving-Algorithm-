#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
bool graph[1001][1001];
bool visit[1001];
int N;
queue<int> q;
void dfs(int V)
{
	visit[V] = true;
	cout << V << " ";
	for (size_t i = 1; i <= N; i++)
	{
		if (graph[V][i] && !visit[i])
			dfs(i);
	}
}
void bfs()
{
	int s = q.front();
	q.pop();
	cout << s << " ";
	for (size_t i = 1; i <= N; i++)
	{
		if (graph[s][i] && !visit[i])
		{
			visit[i] = true;
			q.push(i);
		}
	}
	if (q.empty())
		return;
	bfs();
}
int main()
{
	ios::sync_with_stdio(false);
	int M, V;
	cin >> N >> M >> V;
	memset(visit, false, sizeof(visit));
	int s, e;
	for (size_t i = 0; i < M; i++)
	{
		cin >> s >> e;
		graph[s][e] = true;
		graph[e][s] = true;
	}
	dfs(V);
	cout << "\n";
	memset(visit, false, sizeof(visit));
	q.push(V);
	visit[V] = true;
	bfs();
	cout << "\n";
	return 0;
}