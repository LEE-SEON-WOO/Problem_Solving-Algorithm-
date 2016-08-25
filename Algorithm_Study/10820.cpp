#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	string str;
	while (getline(cin, str))
	{
		int spc = 0, A = 0, a = 0;
		int ncnt = 0;
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == ' ')
				spc++;
			else if (str[i] <= '9')
				ncnt++;
			else if (str[i] <= 'Z')
				A++;
			else if (str[i] <= 'z')
				a++;
		}
		cout << a << ' ' << A << ' ' << ncnt << ' ' << spc << endl;
	}
	
}