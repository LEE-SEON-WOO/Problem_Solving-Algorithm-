#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	string str;
	//a=97, z=122
	//a b c d e f g h i j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z
	//1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26
	string vstr;
	getline(cin, str);
	getline(cin, vstr);
	int si = vstr.size();
	int temp;
	for (size_t i = 0; i < str.size(); i++)
	{
		if (str[i] == ' ')
			continue;
		 temp = (int)str[i]-(int)vstr[i%si];
		 if (temp <= 0)
			 temp = temp + 'z';
		 else
			 temp = temp + 'a' - 1;
		 str[i] = (char)temp;
	}
	cout << str << endl;

	return 0;
}