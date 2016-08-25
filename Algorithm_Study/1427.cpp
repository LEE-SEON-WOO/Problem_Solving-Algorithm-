#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;
vector<char> v;
int main()
{
	ios::sync_with_stdio(false);
	char buf[100];
	cin >> buf;
	v.assign(strlen(buf), 0);
	for (size_t i = 0; i < strlen(buf); i++)
	{
		v[i] = buf[i];
	}
	sort(v.rbegin(), v.rend());
	for (size_t i = 0; i < v.size(); i++)
		cout << v[i];

	return 0;
}