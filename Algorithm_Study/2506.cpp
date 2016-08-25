#include <iostream>

using namespace std;
int arr[101];
int main()
{
	ios::sync_with_stdio(false);
	int N,V;
	int temp = -1;
	cin >> N;
	int S = 0;
	int idx = 1;
	for (int i = 0; i < N; i++)
	{
		cin >> V;
		if (V == 1)
		{
			if (temp == V)
			{
				S += ++idx;
			}
			else
			{
				idx = 1;
				S += idx;
			}
		}
		temp = V;
	}
	cout << S << "\n";
	return 0;
}