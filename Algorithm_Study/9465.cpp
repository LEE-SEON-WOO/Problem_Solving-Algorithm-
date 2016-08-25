#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int arr[2][100001];
int dp[2][100001];
int main()
{
	ios::sync_with_stdio(false);
	int n, T;
	cin >> T;
	while (T--)
	{
		cin >> n;
		memset(arr, 0, sizeof(arr));
		memset(dp, 0, sizeof(dp));
		for (size_t i = 0; i < 2; i++)
		{
			for (size_t j = 0; j < n; j++)
			{
				cin >> arr[i][j];
			}
		}
		dp[0][0] = arr[0][0];
		dp[1][0] = arr[1][0];
		dp[0][1] = arr[1][0] + arr[0][1];
		dp[1][1] = arr[0][0] + arr[1][1];
		for (int i = 2; i <= n; i++)
		{
			dp[0][i] = arr[0][i] + max(dp[1][i - 1], dp[1][i - 2]);
			dp[1][i] = arr[1][i] + max(dp[0][i - 1], dp[0][i - 2]);
		}
		//for (size_t i = 0; i < 2; i++)
		//{
		//	for (size_t j = 0; j < n; j++)
		//	{
		//		cout << dp[i][j] << ' ';
		//	}
		//	cout << endl;
		//}
		cout << max(dp[0][n],dp[1][n]) << "\n";
	}
	return 0;
}