#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	string str;
	cin >> str;
	for (size_t i = 0; i < str.size(); i++)
	{
		if ((int)str[i] <= (int)'Z' && (int)str[i] > (int)'-')
			cout << str[i];
	}
	return 0;
}