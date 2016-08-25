#include <iostream>
using namespace std;
int dp[11];

int main()
{
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	int V;
	for (size_t j = 0; j < N; j++)
	{
		cin >> V;
		dp[1] = 1;
		dp[2] = 2;
		dp[3] = 4;
		for (int i = 4; i <= V; i++)
		{
			dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
		}
		cout << dp[V] << "\n";
	}


	return 0;
}