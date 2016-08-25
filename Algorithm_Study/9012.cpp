#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int T;
	cin >> T;
	while (T--)
	{
		string str;
		cin >> str;
		int cnt = 0;
		bool chk = false;
		if (str[0] == ')')
		{
			cout << "NO\n";
			continue;
		}
		else if (str[str.size() - 1] == '(')
		{
			cout << "NO\n";
			continue;
		}
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == '(')
				cnt++;
			else if (str[i] == ')')
				cnt--;
			if (cnt < 0)
			{
				chk = true;
				break;
			}
		}
		if (chk)
		{
			cout << "NO\n";
		}
		else
		{
			if (!cnt)
				cout << "YES\n";
			else cout << "NO\n";
		}
	}
	return 0;
}