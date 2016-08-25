#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
#define MAX 2139062143
int dp[501][501];
pair<int, int> arr[501];
int N;
int func(int p, int q)
{
	if (p == q)
		return 0;
	if (p+1==q)
		return arr[p].first*arr[p].second*arr[q].second;
	if (dp[p][q] != -1)
		return dp[p][q];
	dp[p][q] = MAX;
	for (int i = p; i < q; i++)
	{
		dp[p][q] = min(dp[p][q], func(p, i)+func(i+1, q)+(arr[p].first)*(arr[i].second)*(arr[q].second));
	}
	return dp[p][q];
}
int main()
{
	ios::sync_with_stdio(false);
	cin >> N;
	memset(dp, -1, sizeof(dp));
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i].first >> arr[i].second;
	}
	cout << func(0, N-1);
	return 0;
}