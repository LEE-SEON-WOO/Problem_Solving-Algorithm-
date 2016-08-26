#include <iostream>
#include <string>
#include <cstring>
using namespace std;
bool chk;
int arr1[1000];
int arr2[1000];
void func(string str, int idx)
{
	if (idx >= str.size())
		return;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == 'h')
		{
			arr1[idx] = str.substr(0, i + 1).size();
			func(str.substr(i), idx+1);
			break;
		}
	}
}
void func2(string str, int idx)
{
	if (idx >= str.size())
		return;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == 'h')
		{
			arr2[idx] = str.substr(0, i + 1).size();
			func(str.substr(i), idx + 1);
			break;
		}
	}
}
int main()
{
	string str1;
	string str2;
	cin >> str1 >> str2;
	int idx = 0;
	memset(arr1, 0, sizeof(arr1));
	memset(arr2, 0, sizeof(arr2));
	func(str1, 0);
	func2(str2, 0);
	int max1 = -1;
	int max2 = -1;
	for (int i = 0; i < 1000; i++)
	{
		if (max1 < arr1[i])
			max1 = arr1[i];
		if (max2 < arr2[i])
			max2 = arr2[i];
	}
	if (max1 >= max2)
		cout << "go";
	else cout << "no";
	return 0;
}