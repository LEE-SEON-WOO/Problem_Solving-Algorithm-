#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int T;
	cin >> T;
	string str;
	while (T--)
	{
		cin >> str;
		cout << *str.begin() << *str.rbegin() << "\n";
	}
	return 0;
}