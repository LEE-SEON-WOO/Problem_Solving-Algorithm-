#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int M, N;
	cin >> M >> N;
	vector<int> vec;
	long long sum = 0;
	for (int i = M; i <= N; i++)
	{
		int v= sqrtl(i);
		if ((int)pow(v, 2) == i)
		{
			vec.push_back(i);
			sum += i;
		}
	}
	if (vec.empty())
		cout << -1;
	else
	cout << sum << endl << vec[0];
	return 0;
}