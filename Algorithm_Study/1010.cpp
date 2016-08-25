#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int dp[31][31];
int func(int N, int M)
{
	if (N < M)
		return 0;
	if (M==0)
		return 1;
	if (N == M)
		return 1;
	if (N == 1)
		return M;
	if (dp[N][M] != -1)
		return dp[N][M];
	return dp[N][M] = func(N - 1, M - 1) + func(N-1, M);
}
int main()
{
	ios::sync_with_stdio(false);
	int T, N, M;
	cin >> T;
	while(T--)
	{
		cin >> N >> M;
		memset(dp, -1, sizeof(dp));
		cout << func(M, N) << '\n';
	}
	

	return 0;
}