#include <iostream>
#include <string>
#include <cstring>
using namespace std;
unsigned char str[200];
int main()
{
	string buf;
	getline(cin, buf);
	for (int i = 0; i < 26; i++)
	{
		str[(int)'A' + i] = (int)'A' + i;
		str[(int)'a' + i] = (int)'a' + i;
	}
	//for (int i = 0; i < 26; i++)
	//{
	//	cout << str[(int)'A' + i] << " ";
	//}
	//cout << endl;
	//for (int i = 0; i < 26; i++)
	//{
	//	cout << str[(int)'a' + i] << " ";
	//}
	//cout << endl;
	for (int i = 0; i < 26; i++)
	{
		str[(int)'A' + i] += (int)13;
		if ((int)str[(int)'A' + i] >(int)'Z')
			str[(int)'A' + i] -= (int)26;
		str[(int)'a' + i] += (int)13;
		if ((int)str[(int)'a' + i] >(int)'z')
			str[(int)'a' + i] -= (int)26;
	}
	//for (int i = 0; i < 26; i++)
	//{
	//	cout << str[(int)'A' + i] << " ";
	//}
	//cout << endl;
	//for (int i = 0; i < 26; i++)
	//{
	//	cout << str[(int)'a' + i] << " ";
	//}
	//cout << endl;
	for (int i = 0; i < buf.size(); i++)
	{

		if ((int)buf[i] < (int)'A')
			cout << buf[i];
		else
			cout << str[(int)buf[i]];
	}
}