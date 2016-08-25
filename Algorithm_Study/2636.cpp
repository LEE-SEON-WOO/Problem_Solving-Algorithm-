#include <iostream>
#include <cstring>
using namespace std;

int graph[102][102];
bool visit[102][102];
int R, C;
int di[] = { 0, 0, -1, 1 };
int dj[] = { -1, 1, 0, 0 };

void dfs(int I, int J)
{
	int ni;
	int nj;
	visit[I][J] = 1;
	for (size_t i = 0; i < 4; i++)
	{
		ni = I + di[i];
		nj = J + dj[i];
		if (ni<0 || ni>(R + 1) || nj<0 || nj>(C + 1))
			continue;
		if (!visit[ni][nj] && graph[ni][nj])
		{
			visit[ni][nj] = 1;
			graph[ni][nj] = 0;
		}
		else if (!visit[ni][nj] && !graph[ni][nj])
			dfs(ni, nj);
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin >> R >> C;
	for (size_t i = 1; i <= R; i++)
		for (size_t j = 1; j <= C; j++)
			cin >> graph[i][j];
	int lastcheese = 0, day = 0;
	while (1)
	{
		day++;
		memset(visit, 0, sizeof(visit));
		dfs(0, 0);
		int tempch = 0;
		for (size_t i = 1; i <= R; i++)
			for (size_t j = 1; j <= C; j++)
				if (graph[i][j] == 1)
					tempch++;
		if (tempch == 0)
		{
			cout << day << "\n" << lastcheese << "\n";
			break;
		}
		else
			lastcheese = tempch;
	}
	return 0;
}