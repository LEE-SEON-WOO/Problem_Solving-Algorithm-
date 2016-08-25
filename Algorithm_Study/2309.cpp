#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int arr[9];
	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + 9);
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (i == j)
				continue;
			int sum = 0; 
			for (int k = 0; k < 9; k++)
			{
				if (i == k)
					continue;
				if (j == k)
					continue;
				sum += arr[k];
			}
			if (sum == 100)
			{
				for (int l = 0; l < 9; l++)
				{
					if (i == l)
						continue;
					if (j == l)
						continue;
					cout << arr[l] << endl;
				}
				return 0;
			}
		}
	}

	return 0;
}