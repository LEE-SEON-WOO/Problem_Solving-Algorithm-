#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int s = 0;
	for (int i = 0; i < 5; i++)
	{
		int t;
		cin >> t;
		s += t;
	}
	cout << s << endl;
	return 0;
}