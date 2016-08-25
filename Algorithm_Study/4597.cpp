#include <iostream>
#include <string>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	int cnt = 0;
	string str;
	bool ise = false;
	while (true)
	{
		cnt = 0;
		ise = false;
		cin >> str;
		if (str[0] == '#')
			break;
		for (size_t i = 0; i < str.size(); i++)
		{
			if (str[i] == '1')
				cnt++;
			if (str[i] == 'e')
				ise = true;
		}
		if ((cnt % 2 == 0)&&ise)
			str[str.size() - 1] = '0';
		else if((cnt%2==0)&&!ise)
			str[str.size() - 1] = '1';
		else if ((cnt % 2 != 0) && ise)
			str[str.size() - 1] = '1';
		else if ((cnt % 2 != 0) && !ise)
			str[str.size() - 1] = '0';
		cout << str << endl;
	}

	return 0;
}