#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int arr[1001];
int lis[1001];
int main()
{
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	memset(arr, 0, sizeof(arr));
	memset(lis, 0, sizeof(lis));
	for (int i = 1; i <= N; i++)
	{
		cin >> arr[i];
	}
	for (int i = 1; i <= N; i++)
	{
		int max = 0;
		for (int j = 1; j <= i; j++)
			if (arr[j] < arr[i])
				if (max < lis[j])
					max = lis[j];
		lis[i] = max + 1;
	}
	int _max = 0;
	for (int i = 1; i <= N; i++)
		lis[0] = max(lis[0], lis[i]);
	cout << lis[0];
	return 0;
}