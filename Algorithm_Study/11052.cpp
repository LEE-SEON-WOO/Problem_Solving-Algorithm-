#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int arr[1001];
int dp[1001];
int N;
int func(int n)
{
	//cout << n << endl;
	if (n > N)
		return 0;
	if (dp[n] != 0)
		return dp[n];
	//int res = 0;
	for (int i = 1; i <= N-n; i++)
	{
		//cout << dp[n] << "¿Í " << arr[i] + func(n + i) << "ºñ±³" << endl;
		dp[n] = max(arr[i] + func(n + i), dp[n]);
	}
	return dp[n];
}
int main()
{
	ios::sync_with_stdio(false);
	cin >> N;
	memset(dp, 0, sizeof(dp));
	for (int i = 1; i <= N; i++)
	{
		cin >> arr[i];
	}
	cout << func(0);
	return 0;
}