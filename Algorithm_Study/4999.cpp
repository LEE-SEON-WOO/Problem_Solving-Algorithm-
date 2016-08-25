#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1;
	string str2;
	cin >> str1;
	for (int i = 0; i < str1.size(); i++)
	{

		for (int j=i; j < str1.size(); j++)
		{
			if (str1[j] == 'h')
			{
				
				cout << "i=" << i << ", j=" << j << endl;
				cout << str1.substr(i, j) << endl;
				//cout << str1.substr(i, j) << endl;
				i = j;
				break;
			}
		}

	}

	return 0;
}