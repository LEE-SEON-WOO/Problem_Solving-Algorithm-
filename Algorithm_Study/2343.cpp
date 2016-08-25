#include <iostream>
#include <algorithm>
using namespace std;

int arr[100001];
int main()
{
	ios::sync_with_stdio(false);
	int N, M;
	cin >> N >> M;
	int sum = 0;
	int _max = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		sum += arr[i];
		_max = max(_max, arr[i]);
	}
	int s=0, e=sum;
	while (s <= e)
	{
		int mid = (s + e) / 2;
		//cout << mid << endl;
		int count = 1;
		int tmp = 0;
		for (int i = 0; i < N; i++)
		{
			if (tmp +arr[i]<= mid)
				tmp += arr[i];
			else
			{
				count++;
				tmp = arr[i];
			}
		}
		if (count > M)
			s = mid + 1;
		else e = mid - 1;
	}
	if (_max > s)
	{
		cout << _max;
	}
	else cout << s;
	return 0;
}