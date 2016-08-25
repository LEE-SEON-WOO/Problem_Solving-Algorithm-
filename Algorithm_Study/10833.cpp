#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	int res = 0, a, b;
	while (N--)
	{
		cin >> a >> b;
		res += (b%a);
	}
	cout << res << endl;
	return 0;
}