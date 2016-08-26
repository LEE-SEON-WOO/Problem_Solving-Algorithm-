#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int E, M, S;
	//15, 28, 19
	cin >> E >> M >> S;
	for (int i = 0; i < 10000000; i++)
	{
		if ((i % 15)+1 == E)
		{
			if ((i % 28)+1 == M)
			{
				if ((i % 19)+1 == S)
				{
					cout << i+1 << endl;
					break;
				}
			}
		}
	}

	return 0;
}