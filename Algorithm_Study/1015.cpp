#include <iostream>
#include <algorithm>
using namespace std;
int arr1[51];
pair<int, int> arr2[51];
bool barr[51];
int main()
{
	ios::sync_with_stdio(false);
	int N, V;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> V;
		arr1[i] = V;
		arr2[i].first = V;
	}
	sort(arr2, arr2 + N);
	for (int i = 0; i < N; i++)
	{
		arr2[i].second = i;
	}
	int temp = -1;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (arr1[i] == arr2[j].first)
			{
				if (barr[j] == true)
					continue;
				barr[j] = true;
				cout << arr2[j].second << " ";
				break;
			}
		}
	}
	return 0;
}