#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	string str;
	cin >> str;
	int s =0 ;
	for (size_t i = 0; i < str.size(); i++)
	{
		if (str[i] == 'a')
			s++;
		else if (str[i] == 'e')
			s++;
		else if (str[i] == 'i')
			s++;
		else if (str[i] == 'o')
			s++;
		else if (str[i] == 'u')
			s++;
	}
	cout << s;
	return 0;
}