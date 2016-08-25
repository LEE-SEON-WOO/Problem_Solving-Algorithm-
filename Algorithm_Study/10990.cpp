#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = i+1; j < N; j++)
		{
			cout << ' ';
		}
		if (i >= 0)
		{
			cout << "*";
		}
		for (int k = 0; k < 2 * i - 1; k++)
		{
			cout << ' ';
		}
		if (i > 0)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}