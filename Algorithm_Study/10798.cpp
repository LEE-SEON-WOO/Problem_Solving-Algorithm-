#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	string str[5];
	size_t maxstr = 0;
	for (size_t i = 0; i < 5; i++)
	{
		cin >> str[i];
		if (maxstr < str[i].size())
			maxstr = str[i].size();
	}
	for (size_t i = 0; i < maxstr; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			if (str[j].size() <= i)
				continue;
			cout << str[j][i];
		}
	}
		
	return 0;
}