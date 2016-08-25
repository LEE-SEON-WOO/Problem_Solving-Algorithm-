#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<int> v;
	v.assign(n, 0);
	for(size_t i=0; i<n; i++)
	{
		cin >> v[i];
	}
	int res = 0;
	sort(v.begin(), v.end());
	do
	{
		int tmp = 0;
		for (size_t i = 0; i < v.size()-1; i++)
		{
			tmp += abs(v[i] - v[i + 1]);
		}
		res = max(res, tmp);
	} while (next_permutation(v.begin(), v.end()));
	cout << res << endl;
	return 0;
}