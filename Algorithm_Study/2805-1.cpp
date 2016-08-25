#include <iostream>
using namespace std;
#define INT long long int
INT v[1000000];
int main()
{
	ios::sync_with_stdio(false);
	int n = 0, m = 0;
	cin >> n >> m;
	INT max_check = 0;
	INT min_check = 0;
	for (int i = 0;i < n;i++)
	{
		cin >> v[i];
		if (max_check < v[i]) //최대값 구하기
		{
			max_check = v[i];
		}
	}
	INT mid = 0;
	INT check = 0;
	INT premid = 0;
	while (max_check >= min_check) 
	{
		check = 0;
		mid = (max_check + min_check) / 2;
		if (premid == mid)
		{
			break;
		}
		premid = mid;
		for (int i = 0;i < n;i++)
		{
			if (v[i] - mid >= 0)
			{
				check += v[i] - mid;
			}
		}
		if (check > m)
		{
			min_check = mid;
		}
		else if (check < m)
		{
			max_check = mid;
		}
		else if (check == m)
		{
			break;
		}
	}
	cout << mid << "\n";
	return 0;
}