#include <iostream>
#include <vector>
#include <cstring>
#include <string>
#include <queue>
using namespace std;

char arr[1001][1001];
char tm[1001][1001];
bool visit[1001][1001];
int n, m;
void func(int I, int J)
{
	
	visit[I][J] = true;
	arr[I][J] = 'x';
	int di[] = { 0,0,-1,1 };
	int dj[] = { -1,1, 0, 0 };
	for (int i = 0; i < 4; i++)
	{
		//cout << 'a' << endl;
		int ni = di[i] + I;
		int nj = dj[i] + J;
		if (ni < 1 || ni>(n+1) || nj < 1 || nj>(m+1))
			continue;
		if (!visit[ni][nj] && arr[ni][nj] == '*')
		{
			cout << ni << " " << nj << "µé¾î°¨" << endl;
			arr[ni][nj] = 'x';
			func(ni, nj);
		}
		else if (!visit[ni][nj] && arr[ni][nj] == '.')
		{
			//arr[di[i] + I][dj[i] + J] = '.';
			visit[ni][ni] == true;
		}
	}
	
}
int main()
{
	ios::sync_with_stdio(false);

	vector<pair<int, int> > v;
	cin >> n >> m;
	memset(visit, 0, sizeof(visit));
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] == '*')
				v.push_back(make_pair(i, j));
		}
	}
	func(v[0].first, v[0].second);
	cout << endl;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cout << arr[i][j];
		}cout << endl;
	}
	return 0;
}