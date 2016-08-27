#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	string s1, s2;
	int T;
	cin >> T;
	while (T--)
	{
		cin >> s1;
		cin.ignore(1, '\n');
		getline(cin, s2);
		cout << "god";
		for (int i = 0; i < s2.size(); i++)
		{
			if (s2[i] == ' ')
				continue;
			cout << s2[i];
		}
		cout << endl;
	}
	return 0;
}