#include <iostream>
#include <cstring>
using namespace std;

int arr[102];
int main()
{
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	memset(arr, 0, sizeof(arr));
	int v;
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}
	int rest = 0;
	int thrN = 0;
	for (int i = 1; i <= n; i++)
	{
		if (arr[i] == 0)
		{
			rest++;
			continue;
		}
		if (arr[i] == 1)
		{
			switch(arr[i - 1])
			{
			case 0:
				break;
			case 1:
				rest++;
				arr[i] = 0;
				break;
			case 2:
				break;
			case 3:
				//arr[i] = 2;
				break;
			}
		}
		else if (arr[i] == 2)
		{
			switch (arr[i - 1])
			{
			case 0:
				break;
			case 1:
				break;
			case 2:
				rest++;
				arr[i] = 0;
				break;
			case 3:
				//arr[i] = 1;
				break;
			}
		}
		else if (arr[i] == 3)
		{
			switch (arr[i - 1])
			{
			case 0:
				break;
			case 1:
				arr[i] = 2;
				break;
			case 2:
				arr[i] = 1;
				break;
			case 3:
				break;
			}
		}

	}
	cout << rest << endl;
	return 0;
}