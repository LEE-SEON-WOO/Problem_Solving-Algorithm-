#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	int lev = 1, sum = 1;
	while (sum <= N)
	{
		sum = lev * 6;
		lev++;
	}
	cout << lev;
	return 0;
}