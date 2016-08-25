#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long int INT;
INT arr[1001][3];
INT dp[1001][3];
int main()
{
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	memset(dp, 0, sizeof(dp));
	memset(arr, 0, sizeof(arr));
	for (int i = 0; i < N; i++)
		for (int j = 0; j < 3; j++)
			cin >> arr[i][j];

	dp[0][0] = arr[0][0];
	dp[0][1] = arr[0][1];
	dp[0][2] = arr[0][2];
	dp[1][0] = arr[1][0] + min(arr[0][2], arr[0][1]);
	dp[1][1] = arr[1][1] + min(arr[0][0], arr[0][2]);
	dp[1][2] = arr[1][2] + min(arr[0][0], arr[0][1]);
	for (int i = 2; i <= N; i++)
	{
		dp[i][0] = arr[i][0] + min(dp[i - 1][1], dp[i - 1][2]);
		dp[i][1] = arr[i][1] + min(dp[i - 1][0], dp[i - 1][2]);
		dp[i][2] = arr[i][2] + min(dp[i - 1][0], dp[i - 1][1]);
	}
	cout << min(dp[N][0], min(dp[N][1], dp[N][2]));
	return 0;
}