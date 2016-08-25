#include <iostream>
#include <cstring>
using namespace std;
typedef long long INT;
INT arr[102];
INT dp[102];
INT func(int N)
{
	if (N <= 0)
		return 0;
	if (N == 1)
		return 1;
	if (N == 2)
		return 1;
	if (N == 3)
		return 1;
	if (dp[N] != -1)
		return dp[N];
	return dp[N]=func(N - 2) + func(N - 3);
}
int main()
{
	ios::sync_with_stdio(false);
	int T;
	cin >> T;
	memset(dp, -1, sizeof(dp));
	while (T--)
	{
		int N;
		cin >> N;
		cout << func(N) << endl;
	}

	return 0;
}