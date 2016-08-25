#include <iostream>
#include <algorithm>
using namespace std;
char dp[102][102][1000];
void bigplus(char *store, char *a, char *b)
{
	char t[100] = { 0 };
	int i = strlen(a), j = strlen(b), p, s;
	for (p = 0; i || j;p++)
	{
		s = (i ? a[i - 1] : '0') + (j ? b[j - 1] : '0') - '0' * 2;
		if (s + t[p] > 9)
			t[p + 1] += (s + t[p]) / 10;
		t[p] = (s + t[p]) % 10;
		if (i > 0)
			i--;
		if (j > 0)
			j--;
	}
	if (!t[p])
		p--;
	for (i = 0;i <= p;i++)
		store[p - i] = t[i] + '0';
	store[p + 1] = 0;
}
int main()
{
	ios::sync_with_stdio(false);
	int n, k;
	cin >> n >> k;
	for (int i = 0; i <= n; i++)
	{
		strcpy(dp[i][0], "1");
		strcpy(dp[i][i], "1");
		for (int j = 0; j < i; j++)
		{
			bigplus(dp[i][j], dp[i - 1][j - 1], dp[i - 1][j]);
		}
	}
	cout << dp[n][k];
	return 0;
}