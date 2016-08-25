#include <iostream>
#include <cstring>
using namespace std;
int arr[100][100];
int main()
{
	ios::sync_with_stdio(false);
	int N, M;
	cin >> N >> M;
	memset(arr, 0, sizeof(arr));
	int v;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> v;
			arr[i][j] += v;
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> v;
			arr[i][j] += v;
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}