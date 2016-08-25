#include <iostream>
#include <cstring>
using namespace std;

int arr[300];
int main()
{
	ios::sync_with_stdio(false);
	int N, M;
	cin >> N >> M;
	memset(arr, 0, sizeof(arr));
	while (M--)
	{
		int i, j, k;
		cin >> i >> j >> k;
		for (int _i = i; _i <= j; _i++)
		{
			arr[_i] = k;
		}
	}
	for (int _i = 1; _i <= N; _i++)
	{
		cout << arr[_i] << ' ';
	}
	return 0;
}