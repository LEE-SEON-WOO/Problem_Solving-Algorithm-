#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	string str;
	int buf[100];
	cin >> str;
	memset(buf, -1, sizeof(buf));
	for (size_t i = 0; i < str.size(); i++)
	{
		if (buf[(int)str[i]-(int)'a'] == -1)
			buf[(int)str[i]-(int)'a'] = i;
	}
	for (int i = 0; i <= (int)'z'-(int)'a'; i++)
		cout << (int)buf[i] << ' ';
	return 0;
}