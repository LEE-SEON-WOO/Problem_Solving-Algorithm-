#include <iostream>
#include <cstring>
using namespace std;

int graph[52][52];
bool visit[52][52];
int w, h;
int cnt = 0;
void dfs(int I, int J)
{
	visit[I][J] = true;
	int di[] = { 0, 0, -1, 1, 1, -1, 1, -1 };
	int dj[] = { 1, -1, 0, 0, 1, -1, -1, 1 };
	for (int i = 0; i < 8; i++)
	{
		int r = I + di[i];
		int c = J + dj[i];
		if (r<1 || r>w || c<1 || c>h)
			continue;
		if (graph[r][c] && !visit[r][c])
		{
			dfs(r, c);
		}
	}

}
int main()
{
	ios::sync_with_stdio(false);
	while (true)
	{
		cnt = 0;
		cin >> h >> w;
		if (w == 0 && h == 0)
			break;
		memset(visit, false, sizeof(visit));
		for (int i = 1; i <= w; i++)
			for (int j = 1; j <= h; j++)
				cin >> graph[i][j];
		
		 
		for (int i = 1; i <= w; i++)
		{
			for (int j = 1; j <= h; j++)
			{
				if (graph[i][j] && !visit[i][j])
				{
					cnt++;
					dfs(i, j);
				}
			}
		}
		cout << cnt << endl;
	}
	return 0;
}