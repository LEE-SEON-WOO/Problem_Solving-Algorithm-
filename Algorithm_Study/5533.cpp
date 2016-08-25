#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	vector<vector<int> > v;
	v.assign(N, vector <int>(3));
	for (size_t i = 0; i < N; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> v[i][j];
		}
	}
	int arr[101];
	int sum[201];
	memset(sum, 0, sizeof(sum));
	for (int j = 0; j < 3; j++)
	{
		memset(arr, 0, sizeof(arr));
		for (int i = 0; i < N; i++)
		{
			arr[v[i][j]]++;
		}
		for (int i = 0; i < N; i++)
		{
			if (arr[v[i][j]]==1)
				sum[i] += v[i][j];
		}
	}
	for (int i = 0; i < N; i++)
	{
		cout << sum[i] << endl;
	}
	return 0;
}