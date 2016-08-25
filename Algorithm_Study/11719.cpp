#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	string a;
	while ((getline(cin, a)))
	{
		cout << a << "\n";
	}
	return 0;
}