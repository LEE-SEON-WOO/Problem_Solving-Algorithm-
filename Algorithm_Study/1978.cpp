#include <iostream>
using namespace std;


int pri(int n)
{
	if (n == 1)
		return 0;
	int cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n%i == 0)
			cnt++;
		if (cnt > 2)
			return 0;
	}
	if (cnt == 2)
		return 1;
}
int main()
{
	ios::sync_with_stdio(false);
	int N, res = 0, v;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> v;
		res+= pri(v);
	}
	cout << res;
	return 0;
}