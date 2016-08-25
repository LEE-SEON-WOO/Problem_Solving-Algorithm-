#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	string str;
	cin >> str;
	str.append("??!");
	cout << str;
	return 0;
}