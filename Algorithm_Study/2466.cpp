#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int k = 0; k < i; k++)
		{
			cout << " ";
		}
		for (int j = 2*N; j > 2*i+1; j--)
		{
			cout << "*";
		}
		cout << "\n";
	}
	for (int i = N-2; i >= 0; i--)
	{
		for (int k = i; k > 0; k--)
		{
			cout << " ";
		}
		for (int j = 2 * N; j > 2 * i + 1; j--)
		{
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}