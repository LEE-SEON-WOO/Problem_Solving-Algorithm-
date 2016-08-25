#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int T;
	cin >> T;
	long long int A, B;
	while (T--)
	{
		cin >> A >> B;
		long long int x = A, y = B, z = 0;
		while (1)
		{
			z = x%y;
			if (z == 0)
				break;
			x = y;
			y = z;
		}
		cout << (A*B) / y << "\n";
	}

	return 0;
}