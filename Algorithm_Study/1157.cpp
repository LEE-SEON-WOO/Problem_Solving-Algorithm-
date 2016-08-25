#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	string str;
	map<char, int> _map;
	cin >> str;
	for (size_t i = 0; i < str.size(); i++)
	{
		if ((int)str[i] >= (int)'a')
			_map[(char)((int)str[i] - 32)]++;
		else
			_map[str[i]]++;
	}
	//for (auto i : _map)
	//	cout << i.first << " " << i.second << "\n";
	vector<pair<int, char> > v;
	v.assign(_map.size(), make_pair(0, 0));
	int i = 0;
	for (auto it : _map)
	{
		v[i].first = it.second;
		v[i].second = it.first;
		i++;
	}
	sort(v.rbegin(), v.rend());
	//for (auto i : v)
	//	cout << i.first << " " << i.second << "\n";
	if (v[0].first == v[1].first)
		cout << '?';
	else cout << v[0].second;
	return 0;
}