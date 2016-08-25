#include <iostream>
using namespace std;
typedef long long int INT;
int main()
{
	ios::sync_with_stdio(false);
	INT i, j;
	cin >> i >> j;
	if (i > j)
		swap(i, j);
	INT sum1;
	INT sum2;
	if ((i <= 0) && (j <= 0))
	{
		i = -i;
		j = -j;
		sum1 = i*(i + 1) / 2;
		sum2 = j*(j - 1) / 2;
		cout << -(sum1 - sum2) << endl;
	}
	else if (i >= 0 && j >= 0)
	{
		sum1 = i*(i - 1) / 2;
		sum2 = j*(j + 1) / 2;
		cout << sum2 - sum1 << endl;
	}
	else
	{
		i = -i;
		sum1 = i*(i + 1) / 2;
		sum2 = j*(j + 1) / 2;
		cout << sum2 - sum1 << endl;
	}
	return 0;
}