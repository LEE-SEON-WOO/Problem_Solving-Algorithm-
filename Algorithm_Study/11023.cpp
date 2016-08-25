#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int sum = 0;
	int n;
	int T;
	cin>> T;
	char arr[100];
	cin.ignore(1, '\n');
	while (T--)
	{
		cin.getline(arr, 100, '\n');
		for (int i = 0; i != strlen(arr); i++)
		{
			if (arr[i] != ' ')
				sum += (int)arr[i] - 48;
		}
		memset(arr, 0, sizeof(arr));
		cout << sum << "\n";
		sum = 0;
	}
	return 0;
}