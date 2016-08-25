#include <iostream>
#include <cstring>
using namespace std;
int arr[51];
int main()
{
	ios::sync_with_stdio(false);
	int a, b, N;
	cin >> N;
	memset(arr, 0, sizeof(arr));
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	if (N == 1)
		cout << "A\n";
	else if (N == 2)
	{
		if (arr[0] == arr[1])
			cout << arr[0] << '\n';
		else cout << "A\n";
	}
	else if(N>2)
	{
		int a, b;
		if ((arr[1] - arr[0]) != 0)
		{
			a = (arr[2] - arr[1]) / (arr[1] - arr[0]);
		}
		b = arr[1] - arr[0]*a;
		for (int i = 0; i < N-1; i++)
		{
			if (arr[i] * a + b != arr[i + 1])
			{
				cout << "B";
				return 0;
			}
		}
		cout << arr[N - 1] * a + b;
	}
	return 0;
}