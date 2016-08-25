#include <iostream>
#include <cstring>
#include <vector>

using namespace std;
int N, M;
int deg[32001];
vector<int> adj[32001];

void topol(int h)
{
	if (deg[h] != 0)
		return;
	deg[h] = -1;
	cout << h << " ";
	for (int i = 0; i < adj[h].size(); i++)
	{
		deg[adj[h][i]]--;
		topol(adj[h][i]);
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin >> N >> M;
	int x, y;
	memset(deg, 0, sizeof(deg));
	for (int i = 0; i < M; i++)
	{
		cin >> x >> y;
		adj[x].push_back(y);
		deg[y]++;
	}
	for (int i = 1; i <= N; i++)
	{
		topol(i);
	}
	return 0;
}

/*
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;
#define INF 987654321
int main() {
int n, m;
scanf("%d %d", &n, &m);
vector<int> indegree(n + 1);
vector<vector<int> > graph(n + 1);
for (int i = 0; i < m; i++)
{
int u, v;
scanf("%d %d", &u, &v);
indegree[v]++;
graph[u].push_back(v);
}
queue<int> que;
for (int i = 1; i <= n; i++)
{
if (indegree[i] == 0)
que.push(i);
}
while (!que.empty())
{
int here = que.front();
que.pop();
printf("%d ", here);
for (int v : graph[here])
{
indegree[v]--;
if (indegree[v] == 0)
que.push(v);
}
}
}
*/