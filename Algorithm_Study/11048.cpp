#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int dp[1002][1002];
int arr[1002][1002];
int N, M;
int func(int I, int J)
{
	if (I == N && J == M)
		return arr[I][J];
	if (I > N)
		return 0;
	if (J > M)
		return 0;
	if (dp[I][J] != -1)
		return dp[I][J];
	dp[I][J] = max(func(I + 1, J + 1), max(func(I + 1, J), func(I, J + 1))) + arr[I][J];
	return dp[I][J];
}
int main()
{
	ios::sync_with_stdio(false);
	
	cin >> N >> M;
	memset(dp, -1, sizeof(dp));
	memset(arr, 0, sizeof(arr));
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= M; j++)
		{
			cin >> arr[i][j];
		}
	}
	cout << func(1, 1);
	return 0;
}