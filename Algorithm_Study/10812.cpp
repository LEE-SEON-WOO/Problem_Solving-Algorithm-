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
		int i, j, k;
		cin >> i >> j >> k;
		//i~k-1
		int tmpi = i;
		int tmpj = j-i-1;
		for (int l = k; l <= j; l++)
		{
			tmp[tmpi++] = arr[l];
		}
		for (int l = i; l < k; l++)
		{
			tmp[tmpi++] = arr[l];
		}
		//k~j
		
		
		for (int _i = i; _i <= j; _i++)
		{
			arr[_i] = tmp[_i];
		}

		
	}
	for (int i = 1; i <= N; i++)
		cout << arr[i] << ' ';
	cout << endl;
	
	return 0;
}