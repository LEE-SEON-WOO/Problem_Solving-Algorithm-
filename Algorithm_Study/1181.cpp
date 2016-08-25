#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

bool _cmp(const string& s1, const string& s2)
{
	if (s1.size() != s2.size())
		return s1.size() < s2.size();
	else if (s1.size() == s2.size())
		return s1 < s2;
}
int main()
{
	ios::sync_with_stdio(false);
	vector<string> str;
	int T;
	cin >> T;
	str.assign(T, "");
	for (int i = 0; i < T; i++)
	{
		cin >> str[i];
	}
	sort(str.begin(), str.end(), _cmp);
	vector<string>::iterator it = unique(str.begin(), str.end());
	for (vector<string>::iterator i= str.begin(); i!=it; i++)
		cout << *i << "\n";
	return 0;
}