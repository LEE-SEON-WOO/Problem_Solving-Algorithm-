#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
	string str1;
	string buf1;
	while (getline(cin, str1))
	{
		buf1.append(str1);	
	}
	long long int sum = 0;
	string buf = "";
	for (size_t i = 0; i < buf1.size(); i++)
	{
		if (buf1[i] == ',')
		{
			sum+=atoll(buf.c_str());
			buf.clear();
		}
		else
			buf.push_back(buf1[i]);

	}
	sum += atoll(buf.c_str());
	cout << sum << endl;
}