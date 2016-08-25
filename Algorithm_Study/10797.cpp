#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int n,a,cnt = 0;
	cin >> n;
	for (int i = 0; i < 5; i++)
	{
		cin >> a;
		if (a == n)
			cnt++;
	}
	cout << cnt << '\n';
	return 0;
}