#include <iostream>
#include <cstring>
using namespace std;
#define INT long long int
INT dp[91];
INT fibo(int n)
{
	if (n == 0)
		return dp[0] = 0;
	if (n == 1)
		return dp[1] = 1;
	if (n == 2)
		return dp[2] = 1;
	if (dp[n] != -1)
		return dp[n];
	return dp[n]=fibo(n - 1) + fibo(n - 2);
}
int main()
{
	ios::sync_with_stdio(false);
	int n;
	memset(dp, -1, sizeof(dp));
	cin >> n;
	cout << fibo(n) <<"\n";
	return 0;
}