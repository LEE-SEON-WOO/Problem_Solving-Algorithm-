#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	vector<int> v;
	v.assign(N, 0);
	for (size_t i = 0; i < v.size(); i++)
		cin >> v[i];
	sort(v.rbegin(), v.rend());
	long double sum = 0;
	for (size_t i = 0; i < v.size(); i++)
	{
		sum += (double)v[i]/(double)v[0] * 100;
	}
	cout << setprecision(2) << fixed << sum / N;
	return 0;
}