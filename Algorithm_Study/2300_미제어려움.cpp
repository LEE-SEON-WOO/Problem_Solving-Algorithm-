#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
pair<int, int> arr[10001];
int dp[10001];
const int INFI = 0x7f7f7f7f;
int N;

int main()
{
	ios::sync_with_stdio(false);
	
	cin >> N;
	memset(dp, 0x7f, sizeof(dp));
	for (int i = 1; i <= N; i++)
	{
		cin >> arr[i].first >> arr[i].second;
	}
	sort(arr+1, arr + N+1);
	for (int i = 1; i <= N; i++)
	{
		int MAX = 0;
		dp[i] = 987654321;
		for (int j = i; j >= 1; j--)
		{
			MAX = max(MAX, abs(arr[j].second));
			dp[i] = min(dp[i], max(MAX * 2, arr[i].first - arr[j].first) + dp[j - 1]);
		}
	}
	cout << dp[N];
	return 0;
}