#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int A = 0, B = 0, C = 0;
	//5Ка 1Ка 10УЪ
	int T;
	cin >> T;
	if (T / 300 > 0)
	{
		A = T / 300;
		T = T % 300;
	}
	if (T / 60 > 0)
	{
		B = T / 60;
		T = T % 60;
	}
	if (T % 10 == 0)
	{
		C = T / 10;
	}
	else
	{
		cout << -1;
		return 0;
	}
	cout << A << ' ' << B << ' ' << C;
	return 0;
}