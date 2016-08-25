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
		cnt[v]++;	//�ش� vertice�� ������ v
		graph[u].push_back(v);	//�ش� u�� ������ vertice
	}

	for (int i = 1; i <= n; i++)
	{
		if (cnt[i] == 0) //���� �ƹ��� edge�� ���� �ʴ´ٸ�. �ش� vertice�κ��� ������ vertice�� �ִ��� �˻��ϱ����� �ִ´�.
			_que.push(i);
	}
	while (!_que.empty())
	{
		int i = _que.front();	//�˻�.
		_que.pop();
		cout<< i <<" ";
		for (int j = 0; j < graph[i].size(); j++)
		{
			cnt[graph[i][j]]--;	//�ش� vertice���� �ϳ� ����.
			if (cnt[graph[i][j]] == 0)	//���� ������ vertice�� ���ٸ� 
				_que.push(graph[i][j]);	//�˻��ϱ����� ť�� ����.
		}
	}
}