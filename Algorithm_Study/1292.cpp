//122333444455555666666
#include <iostream>
using namespace std;
int arr[1000001];
int idx = 1;
int main()
{
	ios::sync_with_stdio(false);
	int A, B;
	cin >> A >> B;
	for (int i = 1; i <= B; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			//cout << i << ' ';
			arr[idx++] = i;
		}
	}
	long long int S = 0;
	for (int i = A; i <= B; i++)
	{
		//cout << arr[i] << ' ';
		S += arr[i];
	}
	//cout << endl;
	cout << S;
	return 0;
}