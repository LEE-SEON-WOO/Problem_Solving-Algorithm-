#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>
#include <functional>
using namespace std;

bool arr[52][52];
bool visit[52][52];

int main()
{
	ios::sync_with_stdio(false);
	int T;
	scanf("%d", &T);
	while (T--)
	{
		int M, N, K;
		scanf("%d %d %d", &N, &M, &K);
		priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > q;

		memset(visit, false, sizeof(visit));
		memset(arr, 0, sizeof(arr));
		for (int i = 0; i < K; i++)
		{
			int s, e;
			scanf("%d %d", &s, &e);
			arr[s][e] = 1;
			q.push(make_pair(s, e));
		}
		int cnt = 0;
		while (!q.empty())
		{
			pair<int, int> s = q.top();
			q.pop();
			if (!arr[s.first][s.second])
				continue;
			cnt++;
			visit[s.first][s.second] = true;

			priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > tq;
			tq.push(s);

			int di[] = { 1, -1, 0, 0 };
			int dj[] = { 0, 0, -1, 1 };
			while (!tq.empty())
			{
				pair<int, int> ss = tq.top();
				tq.pop();
				for (int k = 0; k < 4; k++)
				{
					if (ss.first + di[k] < 0 || ss.first + di[k] >= N || ss.second + dj[k] < 0 || ss.second + dj[k] >= M)
						continue;
					if (arr[ss.first + di[k]][ss.second + dj[k]] && !visit[ss.first + di[k]][ss.second + dj[k]])
					{
						arr[ss.first + di[k]][ss.second + dj[k]] = 0;
						tq.push(make_pair(ss.first + di[k], ss.second + dj[k]));
						visit[ss.first + di[k]][ss.second + dj[k]] = true;
					}
				}
			}
			
		}
		printf("%d\n", cnt);
	}
	return 0;
}