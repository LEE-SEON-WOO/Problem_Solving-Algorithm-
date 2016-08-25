#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	string str;
	cin >> str;
	long long int sum = 0;
	string buf="";
	for (size_t i = 0; i < str.size(); i++)
	{
		if (str[i] == ',')
		{
			sum++;
			buf.clear();
		}
		else
		buf.push_back(str[i]);
		
	}
	sum++;
	cout << sum << endl;

	return 0;
}