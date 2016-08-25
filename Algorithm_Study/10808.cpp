#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	map<char, int> _map;
	string str;
	cin >> str;
	for (size_t i = 0; i < str.size(); i++)
	{
		_map[str[i]]++;
	}
	for (int i = (int)'a'; i <= (int)'z'; i++)
	{
		cout << _map[(char)i] << ' ';
	}

	return 0;
}