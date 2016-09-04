#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int T, idx;
	cin >> T;
	while (T--)
	{
		string str;
		cin >> idx >> str;
		for (int i = 0; i < str.size(); i++)
		{
			if (i == (idx-1))
				continue;
			cout << str[i];
		}
		cout << endl;
	}

	return 0;
}