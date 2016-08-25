#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int N;
	string str;
	//A65 a97
	//Z90
	cin >> N;
	cin.ignore(1, '\n');
	while( N--)
	{
		getline(cin, str);
		if (str[0] >= 'a')
		{
			cout << (char)((int)str[0] - (int)'a' + (int)'A');
		}
		else
			cout << str[0];
		for (size_t i = 1; i < str.size(); i++)
		{
			cout << str[i];
		}

		cout << endl;
	}

	return 0;
}