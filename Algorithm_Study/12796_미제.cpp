#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>
using namespace std;
#define MAX 987654321
pair<int, int> arr[101];
int N;
int dp[101][101];
int m_func(int p, int q)
{
	if (p == q)
		return 0;
	if (p + 1 == q)
		return arr[p].first*arr[p].second*arr[q].second;
	if (dp[p][q] != -1)
		return dp[p][q];
	dp[p][q] = MAX;
	for (int i = p; i <= q; i++)
	{
		dp[p][q] = min(dp[p][q], m_func(p, i) + m_func(i + 1, q) + arr[p].first*arr[i].second*arr[q].second);
	}
	return dp[p][q];
}
int max_func(int p, int q)
{
	if (p == q)
		return 0;
	if (p + 1 == q)
		return arr[p].first*arr[p].second*arr[q].second;
	if (dp[p][q] != -1)
		return dp[p][q];
	dp[p][q] = INT_MIN;
	for (int i = p; i < q; i++)
	{
		dp[p][q] = max(dp[p][q], max_func(p, i) + max_func(i + 1, q) + arr[p].first*arr[i].second*arr[q].second);
	}
	return dp[p][q];
}
int main()
{
	ios::sync_with_stdio(false);
	memset(dp, -1, sizeof(dp));
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i].first >> arr[i].second;
	}
	cout << m_func(0, N - 1) << "\n";
	memset(dp, -1, sizeof(dp));
	cout << max_func(0, N - 1) << "\n";
	cout << m_func(0, N - 1) - max_func(0, N - 1) << "\n";
	return 0;
}