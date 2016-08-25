#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	string str;
	getline(cin, str);
	int smile = 0;
	int sad = 0;
	for (int i = 1; i < str.size()-1; i++)
	{
		if (str[i-1] == ':')
			if (str[i] == '-')
			{
				if (str[i + 1] == '(')
					sad++;
				else if (str[i + 1] == ')')
					smile++;
			}
	}
	if (sad == 0 && smile == 0)
	{
		cout << "none";
	}
	else if (sad == smile)
	{
		cout << "unsure";
	}
	else if (sad > smile)
		cout << "sad";
	else if (sad < smile)
		cout << "happy";
	return 0;
}