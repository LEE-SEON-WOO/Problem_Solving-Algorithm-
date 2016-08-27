#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
const unsigned int INFI = 0xffffffff;
int dp[502][502];
int arr[502][502];
int M, N;
int cnt = 0;
int func(int I, int J)
{
	if (dp[I][J]!=0)
		return dp[I][J];
	if (I == M && J == N)
		return dp[I][J];
	int di[] = { 0,0,-1,1 };
	int dj[] = { -1,1,0,0 };
	for (int i = 0; i < 4; i++)
	{
		if (di[i] + I<1 || di[i] + I>M || dj[i] + J<1 || dj[i] + J>N)
			continue;
		if (arr[di[i] + I][dj[i] + J] < arr[I][J])
		{
			dp[I][J]+=	func(di[i] + I, dj[i] + J);
			//func(di[i] + I, dj[i] + J);
		}
	}
	return dp[I][J];
}
int main()
{
	ios::sync_with_stdio(false);
	memset(dp, 0, sizeof(dp));
	cin >> M >> N;
	for (int i = 1; i <= M; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			cin >> arr[i][j];
		}
	}
	dp[M][N] = 1;
	cout << func(1, 1);
	return 0;
}