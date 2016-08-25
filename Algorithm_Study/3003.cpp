#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	vector<int> v(6);
	for (int i = 0; i < v.size(); i++)
	{
		cin >> v[i];
	}
	cout << 1 - v[0] << ' ' << 1 - v[1] << ' ' << 2 - v[2] << ' ' << 2-v[3] << ' '<< 2 - v[4] << ' ' << 8 - v[5];
	return 0;
}