#include <iostream>
using namespace std;

int arr[100][10];
int main()
{
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < N; i++)
	{
		int cnt = 0;
		for (int j = 0; j < 10; j++)
		{
			if ((j) % 5 + 1 == arr[i][j])
				cnt++;
		}
		if (cnt == 10)
			cout << i + 1 << '\n';
	}

	return 0;
}