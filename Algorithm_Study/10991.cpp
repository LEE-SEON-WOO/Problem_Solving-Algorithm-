#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = N-1; j >i; j--)
		{
			cout << ' ';
		}
		for (int k = 0; k <= 2 * i+1; k++)
		{
			if ((k) % 2 == 0)
				cout << '*';
			else cout << ' ';
		}
		cout << endl;
		
	}

	return 0;
}