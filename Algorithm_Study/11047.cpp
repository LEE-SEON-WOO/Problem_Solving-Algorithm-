#include <iostream>
using namespace std;
int arr[10];
int N;
int K;
int main()
{
	ios::sync_with_stdio(false);
	cin >> N >> K;
	for (size_t i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	int res = 0;
	for (int i = N - 1; i >= 0; i--)
	{
		res +=  K / arr[i];
		K = K % arr[i];
	}
	cout << res;
	return 0;
}