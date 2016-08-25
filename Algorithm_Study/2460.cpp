#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int P, M;
	int arr[11];
	int Max = -1;
	memset(arr, 0, sizeof(arr));
	for (int i = 1; i <= 4; i++)
	{
		cin >> M >> P;
		arr[i] += ((-M) + P + arr[i-1]);
	}
	for (int i = 1; i <= 4; i++)
	{
		if (Max < arr[i])
			Max = arr[i];
	}
	cout << Max << "\n";
	return 0;
}