#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	string s;
	cin >> s;
	int x = 0, y = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '0')
		{
			x = x * 2;
			y = y * 2;
			
		}
		else if (s[i] == '1')
		{
			
			x++;
			x = x * 2;
			y = y * 2;
		}
		else if (s[i] == '2')
		{
			y++;
			x = x * 2;
			y = y * 2;
		}
		else if (s[i] == '3')
		{
			x++;
			y++;
			x = x * 2;
			y = y * 2;
		}
	}	
	cout << s.size() << " " << x/2 << " " << y/2;
	return 0;
}