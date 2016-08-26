#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int arr[21];
int cnt = 0;
int N, s;
void func(int idx, int sum)
{
	sum += arr[idx];
	if (idx == N)
		return;
	if (s == sum)
	{
		cnt++;
	}
	func(idx + 1, sum);
	func(idx + 1, sum - arr[idx]);
}
int main()
{
	ios::sync_with_stdio(false);
	cin >> N >> s;
	memset(arr, 0, sizeof(arr));
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + N);
	func(0, 0);
	cout << cnt;
	return 0;
}