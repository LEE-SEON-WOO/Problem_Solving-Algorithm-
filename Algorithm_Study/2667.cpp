#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
bool visit[28][28];
int graph[28][28];
int N;
void dfs(int I, int J, int cnt)
{
	//cout << I << ' ' << J << ' ' << cnt << endl;
	graph[I][J] = cnt;
	visit[I][J] = true;
	int di[] = { 0, 0, 1, -1 };
	int dj[] = { 1, -1, 0, 0 };
	for (int i = 0; i < 4; i++)
	{
		int c = di[i] + I;
		int r = dj[i] + J;
		if (c<1 || r>N || c<1 || r>N)
			continue;
		if (graph[c][r] && !visit[c][r])
		{
			graph[c][r] = cnt;
			dfs(c, r, cnt);
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);

	cin >> N;
	memset(visit, false, sizeof(visit));
	memset(graph, 0, sizeof(graph));
	for (int i = 1; i <= N; i++)
	{
		string str;
		cin >> str;
		for (int j = 1; j <=N; j++)
		{
			if (str[j-1] == '1')
				graph[i][j] = 1;
			else if(str[j]=='0')
				graph[i][j] = 0;
		}
	}


	int k = 0;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (graph[i][j] && !visit[i][j])
			{
				k++;
				dfs(i, j, k);
			}
		}
	}

	int _max = 0;
	int cnt = 0;
	vector<int> v;
	v.assign(100, 0);
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (graph[i][j])
				v[graph[i][j]]++;
			if (_max < graph[i][j])
				_max = graph[i][j];
		}
	}
	cout << _max << "\n";
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] == 0)
			continue;
		cout << v[i] << "\n";
	}

	return 0;
}