#include <iostream>
#include <deque>
using namespace std;

int arr[301];
int main()
{
	ios::sync_with_stdio(false);
	int N, M;
	cin >> N >> M;
	for (int i = 1; i <= N; i++)
		arr[i] = i;
	int tmp[301];
	while (M--)
	{
		int i, j;
		cin >> i >> j;
		for (int l = i; l <= j; l++)
		{
			tmp[l] = arr[j+i - l ];
		}
		for (int l = i; l <= j; l++)
		{
			arr[l] = tmp[l];
		}

	}
	for (int i = 1; i <= N; i++)
		cout << arr[i] << ' ';
	cout << endl;

	return 0;
}