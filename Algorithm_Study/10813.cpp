#include <iostream>
using namespace std;

int arr[101];
int main()
{
	ios::sync_with_stdio(false);
	int N, M;
	cin >> N>>M;
	for (int i = 1; i <= N; i++)
	{
		arr[i] = i;
	}
	for (int k = 0; k < M; k++)
	{
		int i, j;
		cin >> i >> j;
		swap(arr[i], arr[j]);
	}
	for (int i = 1; i <= N; i++)
	{
		cout << arr[i] << ' ';
	}
	return 0;
}