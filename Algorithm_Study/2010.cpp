#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int N;
	vector<int> v;
	cin >> N;
	v.assign(N, 0);
	for (int i = 0; i < N; i++)
	{
		cin >> v[i];
	}
	long long int S = 0;
	for (size_t i = 0; i < v.size(); i++)
	{
		S += --v[i];
	}
	cout << S + 1 << endl;
	return 0;
}