#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	cout << n / 5 + n / 25 + n / 125 << endl;

	return 0;
}