#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		for (int j = N - i; j >0; j--)
		{
			cout << " ";
		}
		for (int k = 1; k < 2 * i; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	//cout << "\n";
	for (int i = 1; i <= (N-1); i++)
	{
		for (int k = 1; k <= i; k++)
		{
			cout << " ";
		}
		for (int j = (N-1)*2; j > 2 * i -1; j--)
		{
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}