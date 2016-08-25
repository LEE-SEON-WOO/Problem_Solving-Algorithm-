#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int N, F;
	cin >> N >> F;
	int r = N / 100;
	r = r * 100;
	for (int i = 0; i <= 99; i++)
	{
		if ((r+i)%F == 0)
		{
			if (i < 10)
				cout << 0 << i;
			else cout << i;
			break;
		}
	}
	return 0;
}