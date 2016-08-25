#include <iostream>
#include <queue>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	queue<pair<int, int> > que;
	deque<pair<int, int> > deq;
	int T, N, M, v;
	cin >> T;
	int cnt = 0;
	pair<int, int> tmp;
	while (T--)
	{
		cin >> N >> M;
		deq.assign(N, make_pair(0, 0));
		for (int i = 0; i < N; i++)
		{
			cin >> v;
			que.push(make_pair(v, i));
			deq[i] = make_pair(v, i);
			if (i == M)
			{
				tmp = make_pair(v, i);
			}
		}
		sort(deq.rbegin(), deq.rend());
		while (1)
		{
			if (deq.front().first == que.front().first)
			{
				cnt++;
				if (que.front().second == tmp.second)
				{
					break;
				}
				deq.pop_front();
				que.pop();
			}
			else if (deq.front().first != que.front().first)
			{
				que.push(que.front());
				que.pop();
			}
		}
		cout << cnt << endl;
		cnt = 0;
		deq.clear();
		while (!que.empty())
			que.pop();
	}

	return 0;
}