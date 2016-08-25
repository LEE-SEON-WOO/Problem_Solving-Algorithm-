#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
map<string, string> _map;
string func(string str)
{
	if (_map[str] == str)
		return str;
	else
		return func(_map[str]);
}
int main()
{
	ios::sync_with_stdio(false);
	
	int T;
	cin >> T;
	string a;
	string b;
	vector<pair<string, string> > v;
	int F;
	while (T--)
	{
		cin >> F;
		v.assign(F, make_pair("", ""));
		map<string, int> cnt;
		for (size_t i = 0; i < F; i++)
		{
			cin >> a >> b;
			_map[a] = a;
			_map[b] = b;
			v[i] = make_pair(a, b);
		}
		for(size_t i=0; i<F; i++)
		{
			_map[v[i].first] = v[i].second;
			cnt[v[i].first]++;
			cout << cnt[v[i].second] << "\n";
		}

		
		
		v.clear();
		_map.clear();
	}
	
	return 0;
}