#include <iostream>
#include <string>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	string str;
	cin >> str;
	int joi = 0;
	int ioi = 0;
	for (size_t i = 0; i < str.size(); i++)
	{
		if (str[i] == 'J')
			if (str[i + 1] == 'O')
				if (str[i + 2] == 'I')
					joi++;
		if (str[i] == 'I')
			if (str[i + 1] == 'O')
				if (str[i + 2] == 'I')
					ioi++;
	}
	cout << joi << '\n' << ioi << endl;

	return 0;
}