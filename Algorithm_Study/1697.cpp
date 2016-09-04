#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>
using namespace std;
int N, K;
bool visit[100001];
queue<pair<int, int> > q;
int main()
{
	ios::sync_with_stdio(false);
	cin >> N >> K;
	if (N == K)
	{
		cout << 0;
		return 0;
	}
	else if (N > K)
	{
		cout << N - K;
		return 0;
	}
	memset(visit, 0, sizeof(visit));
	q.push(make_pair(N, 0));
	visit[N] = 1;
	while (!q.empty())
	{
		if ((q.front().first - 1) > 0 && !visit[q.front().first - 1])
		{
			q.push(make_pair(q.front().first - 1, q.front().second+1));
			visit[q.front().first - 1] = true;
			if (q.front().first-1 == K)
			{
				cout << q.front().second + 1;
				break;
			}
		}
		if ((q.front().first + 1) <= 100000 && !visit[q.front().first + 1])
		{
			q.push(make_pair(q.front().first + 1, q.front().second+1));
			visit[q.front().first + 1] = true;
			if (q.front().first + 1 == K)
			{
				cout << q.front().second + 1;
				break;
			}
		}
		if ((q.front().first * 2) <= 100000 && !visit[q.front().first * 2])
		{
			q.push(make_pair(q.front().first * 2, q.front().second+1));
			visit[q.front().first * 2] = true;
			if (q.front().first *2 == K)
			{
				cout << q.front().second + 1;
				break;
			}
		}
		q.pop();
	}
	return 0;
}