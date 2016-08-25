#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int arr[21];
	for (int i = 1; i <= 20; i++)
	{
		arr[i] = i;
	}
	int s, e;
	for (int i = 0; i < 10; i++)
	{
		cin >> s >> e;
		while (s < e)
		{
			swap(arr[s], arr[e]);
			s++;
			e--;
		}
	}
	for (int i = 1; i <= 20; i++)
	{
		cout << arr[i] << ' ';
	}
	return 0;
}