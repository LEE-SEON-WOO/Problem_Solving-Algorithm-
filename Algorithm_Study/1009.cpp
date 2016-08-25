#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int T, a, b;
	int res;
	cin >> T;
	while (T--)
	{
		cin >> a >> b;
		res = (int)pow(a % 10, b% 4 + 4) % 10;
		if (res == 0)
			cout << "10\n";
		else
			cout << res << "\n";
	}
	return 0;
}