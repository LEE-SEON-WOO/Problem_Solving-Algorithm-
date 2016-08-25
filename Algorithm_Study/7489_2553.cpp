#include <iostream>
using namespace std;
typedef unsigned long long int INT;
int main()
{
	ios::sync_with_stdio(false);
	int T;
	cin >> T;
	while (T--)
	{
		int n;
		INT s = 1, t = 10;
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			INT j = 0;
			for (j = 1; j <= s*i; j = j * 10)
			{
				if ((s*i / j) % 10 != 0)
					break;
			}
			s = (s*i / j) % t;
			if (i == t)
				t = t * 10;
		}
		cout << s % 10 << "\n";
	}
	return 0;
}