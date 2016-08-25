#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int T;
	int n;
	vector<int> v;
	cin >> T;
	v.assign(T, 0);
	for(size_t i=0; i<T; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	for (auto i : v)
		cout << i << "\n";
	return 0;
}