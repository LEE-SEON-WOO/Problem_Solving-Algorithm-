#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

bool comp(const string& s1, const string& s2)
{
	if (s1.size() != s2.size())
		return s1.size() < s2.size();
	if (s1.size() == s2.size())
	{
		int sum1 = 0;
		int sum2 = 0;
		for (size_t i = 0; i < s1.size(); i++)
		{
			if (s1[i] <= (int)'9')
				sum1 += (int)s1[i] - (int)'0';
		}
		for (size_t i = 0; i < s2.size(); i++)
		{
			if (s2[i] <= (int)'9')
				sum2 += (int)s2[i] - (int)'0';
		}
		if (sum1 < sum2)
			return true;
		else if (sum1 > sum2)
			return false;
		else if (sum1 == sum2)
			return s1 < s2;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	int T;
	vector<string> str;
	cin >> T;
	str.assign(T, "");
	for (size_t i = 0; i < T; i++)
	{
		cin >> str[i];
	}
	sort(str.begin(), str.end(), comp);
	for (auto i : str)
		cout << i << endl;
	return 0;
}