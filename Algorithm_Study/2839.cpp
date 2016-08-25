#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	int res = 987654321;
	for (int i = 0; 3*i <= N; i++)
	{
		for (int j = 0; 5*j <= N; j++)
		{
			if ((3 * i) + (5 * j) == N)
			{
				if(res>i+j)
				{
					res = i+j;
				}
			}
		}
	}
	if (res == 987654321)
		cout << -1;
	else
	cout << res;
	return 0;
}