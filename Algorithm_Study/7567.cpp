#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	string str;
	cin >> str;
	char tmp = str[0];
	int height = 10;
	for (int i = 1; i < str.size(); i++)
	{
		if (str[i] == ')')
		{
			if (tmp == ')')
				height += 5;
			else if (tmp == '(')
			{
				tmp = ')';
				height += 10;
			}
		}
		else if (str[i] == '(')
		{
			if (tmp == '(')
				height += 5;
			else if (tmp == ')')
			{
				tmp = '(';
				height += 10;
			}
		}
	}
	cout << height;
	return 0;
}