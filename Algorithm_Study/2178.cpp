#include <iostream>
#include <queue>
#include <cstring>
#include <string>
using namespace std;
int graph[102][102];
bool visit[102][102];
//int cou = 0;
//void dfs(pair<int, int> v, int N, int M)
//{
//	visit[v.first][v.second] = true;
//	cout << v.first << ' ' << v.second << endl;
//	cou++;
//	if ((v.first) == N && (v.second) == M)
//	{
//		cout << cou << endl;
//		return;
//	}
//	int I[] = { 0,0,-1,1 };
//	int J[] = { 1,-1, 0, 0 };
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			if (graph[v.first + I[i]][v.second + J[j]] && !visit[v.first + I[i]][v.second + J[j]])
//			{
//				
//				dfs(make_pair(v.first + I[i], v.second + J[j]), N, M);
//				
//			}
//		}
//	}
//}
int main()
{
	ios::sync_with_stdio(false);
	int M, V, N;
	queue<pair<int, int> > q;
	cin >> N >> M;
	int s, e;
	memset(graph, 0, sizeof(graph));
	for (size_t i = 1; i <= N; i++)
	{
		string str;
		cin >> str;
		for (size_t j = 0; j <= str.size(); j++)
		{
			if (str[j] == '1')
				graph[i][j + 1] = 1;
		}
	}
	////
	//dfs(make_pair(1, 1), N, M);

	////
	memset(visit, false, sizeof(visit));
	q.push(make_pair(1, 1));
	int cnt = 0;
	while (1)
	{
		int qsize = q.size();
		for (int i = 0; i < qsize; i++)
		{
			pair<int, int> s = q.front();
			visit[s.first][s.second] = true;
			q.pop();
			if ((s.first) == N && (s.second) == M)
			{
				cout << cnt + 1;
				return 0;
			}

			int I[] = { 0,1,0, -1 };
			int J[] = { 1, 0,-1,0 };
			for (int i = 0; i < 4; i++)
			{
				if (graph[s.first + I[i]][s.second + J[i]] && !visit[s.first + I[i]][s.second + J[i]])
				{

					visit[s.first + I[i]][s.second + J[i]] = true;
					q.push(make_pair(s.first + I[i], s.second + J[i]));
				}

			}
		}
		cnt++;
	}

	return 0;
}