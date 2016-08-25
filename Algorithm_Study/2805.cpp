#include <iostream>
using namespace std;
int N, M;
int arr[1000001];

long long int func(long long int H)
{
	long long int s = 0;
	for (int i = 0; i < N; i++)
	{
		if (H < arr[i])
			s += (arr[i] - H);
	}
	return s;
}
int main()
{
	ios::sync_with_stdio(false);
	long long int sum = 0;
	long long int H = -1;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		if (H < arr[i])
		{
			H = arr[i];
		}
	}
	long long int mid;
	long long int start = 0;
	long long int end = H;
	long long int res = -1;
	while (start<=end)
	{
		mid = (start + end) / 2;
		sum = func(mid);
		if (sum == M)
		{
			res = mid;
			break;
		}
		else if (sum > M)
		{
			if (res < mid)
				res = mid;
			start = mid + 1;
		}
		else if (sum < M)
		{
			if (res > mid)		//사실상 하나만 있어도됨
				res = mid;		//주석가능.
			end = mid - 1;
		}
	}
	cout << res << "\n";
	return 0;
}