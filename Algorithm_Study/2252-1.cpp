#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;
int cnt[32001];
vector<int> graph[32001];
queue<int> _que;
int main() 
{
	ios::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	memset(cnt, 0, sizeof(cnt));
	for (int i = 0; i < m; i++)
	{
		int u, v;
		cin>> u >> v;
		cnt[v]++;	//해당 vertice가 들어오는 v
		graph[u].push_back(v);	//해당 u에 나가는 vertice
	}

	for (int i = 1; i <= n; i++)
	{
		if (cnt[i] == 0) //만약 아무도 edge를 받지 않는다면. 해당 vertice로부터 나가는 vertice가 있는지 검사하기위해 넣는다.
			_que.push(i);
	}
	while (!_que.empty())
	{
		int i = _que.front();	//검사.
		_que.pop();
		cout<< i <<" ";
		for (int j = 0; j < graph[i].size(); j++)
		{
			cnt[graph[i][j]]--;	//해당 vertice숫자 하나 내림.
			if (cnt[graph[i][j]] == 0)	//다음 들어오는 vertice가 없다면 
				_que.push(graph[i][j]);	//검사하기위해 큐에 삽입.
		}
	}
}