#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	for (int i = N; i > 0; i--)
	{
		for (int j = 0; j < i - 1; j++)
		{
			cout << " ";
		}
		for (int m = 0; m <= N - i; m++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	for (int i = N-1; i > 0; i--)
	{
		for (int k = 0; k < N-i; k++)
		{
			cout << " ";
		}
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}

		cout << "\n";
	}
	return 0;
}