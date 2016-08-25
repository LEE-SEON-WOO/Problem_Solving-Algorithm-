#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int N;
	int v;
	cin >> N;
	vector<int> _v;
	while (N--)
	{
		cin >> v;
		_v.push_back(v);
	}
	sort(_v.begin(), _v.end());
	cout << _v.front() * _v.back();
	return 0;
}