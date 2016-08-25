#include <iostream>
using namespace std;
const int INF = 0x7f7f7f7f;
int arr[101][101];
int main()
{
	ios::sync_with_stdio(false);
	int N, M;
	cin >> N >> M;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (i == j)
				arr[i][j] = 0;
			else
				arr[i][j] = INF;
		}
	}
	for (int i = 0; i < M; i++)
	{
		int s, e;
		cin >> s >> e;
		arr[s][e] = 1;
		arr[e][s] = 1;
	}
	int MAX = INF;
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= N; j++)
			for (int k = 1; k <= N; k++)
				if (arr[j][i] + arr[i][k] == 2)
					arr[j][k] = 1;
	int cnt = 0;
	for (int i = 1; i <= N; i++)
		if (arr[1][i] == 1)
			cnt++;
	cout << cnt-1 << endl;
	return 0;
}