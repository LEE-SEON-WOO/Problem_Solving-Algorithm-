#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int N, num;
	cin >> N;
	vector<int> v;
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		v.insert(v.end()-num, i+1);
	}
	for (int i; i < v.size(); i++)
		cout << v[i] << ' ';
	return 0;
}