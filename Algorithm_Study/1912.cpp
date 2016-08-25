#include <iostream>
#include <cstring>
using namespace std;

int arr[100001];
int dp[100001];
int main()
{
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 1; i <= n; i++)
	{
		dp[i] = arr[i];
		if (dp[i - 1] + dp[i] > dp[i])
			dp[i] += dp[i - 1];
	}
	int ax = arr[1]; 
	for (int i = 1; i <= n; i++)
	{
		if (ax < dp[i])
			ax = dp[i];
	}
	cout << ax << endl;
	return 0;
}