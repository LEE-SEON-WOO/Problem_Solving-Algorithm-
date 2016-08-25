#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int arr1[10];
int arr2[10];
string strr;
bool pal(int s, int e)
{
	if (s >= e)
		return true;
	if (strr[s] != strr[e])
		return false;
	else
		pal(s + 1, e - 1);
}
int main()
{
	ios::sync_with_stdio(false);
	int n, s1 = 0, s2=0;
	cin >> n;
	string str;
	while (n--)
	{
		s1 = 0, s2 = 0;
		cin >> str;
		for (size_t i=0; i<str.size(); i++)
		{
			arr1[i]=(int)str[i]-(int)'0';//0Àº 48
		}
		for (int i = str.size() - 1; i >= 0; i--)
		{
			arr2[str.size()-i-1] = (int)str[i] - (int)'0';
		}
		string str1;
		string str2;
		for (size_t i = 0; i<str.size(); i++)
		{
			str1.push_back(arr1[i]+ '0');
		}
		for (size_t i = 0; i<str.size(); i++)
		{
			str2.push_back(arr2[i] + '0');
		}
		int sum = atoi(str1.c_str()) + atoi(str2.c_str());
		while (sum != 0)
		{
			strr.push_back(sum % 10 + '0');
			sum=sum / 10;
		}
		bool ch = pal(0, strr.size() - 1);
		if (ch)
			cout << "YES" << endl;
		else cout << "NO" << endl;
		strr.clear();
	}
	return 0;
}