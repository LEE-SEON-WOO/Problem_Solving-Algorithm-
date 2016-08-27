#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	string str;
	cin >> str;
	int len = 0;
	int cnt = 0;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '(')
			len++;
		else if (str[i] == ')')
		{
			if (str[i - 1] == '(')
			{
				len--;
				cnt += len;
			}
			else if (str[i - 1] == ')')
			{
				len--;
				cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}