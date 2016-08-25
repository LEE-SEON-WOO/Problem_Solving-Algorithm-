#include <cstdio>
#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;
int dis[101];
int N;
vector<int> v[101];
int main()
{
	cin >> N;
	int A, B, m;
	cin >> A >> B >> m;
	for (int i = 1; i <= m; ++i)
	{
		int s, e;
		cin >> s >> e;
		v[s].push_back(e);
		v[e].push_back(s);
	}
	memset(dis, -1, sizeof(dis));
	queue<int> q;
	dis[A] = 0;
	q.push(A);
	while (!q.empty())
	{
		int s = q.front();
		q.pop();
		for (int i = 0; i < v[s].size(); ++i)
		{
			int e = v[s][i];
			if (dis[e] == -1)
			{
				dis[e] = dis[s] + 1;
				q.push(e);
				if (e == B)
				{
					cout << dis[v[s][i]];
					return 0;
				}
			}
		}
	}
	cout << -1;
	return 0;
}