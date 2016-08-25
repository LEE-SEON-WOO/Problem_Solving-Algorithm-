#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int dp[10001];
int arr[10001];
int func(int n)
{
	if (n == 1)
		return arr[1];
	if (n == 2)
		return arr[1] + arr[2];
	if (dp[n] != -1)
		return dp[n];
	dp[n] = arr[n] + max(func(n - 2), func(n - 3) + arr[n - 1]);
	//n��° �԰� + �����κ� �����鼭 �״��� �ǳʶٴ� ����, �����κ� �ȸ԰� �״����Դ� ����� ū��
	dp[n] = max(dp[n], func(n - 1));	//�����ʰ� ������ ��������,
	return dp[n];
}
int main()
{
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	memset(dp, -1, sizeof(dp));
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}
	cout << func(n);
	return 0;
}