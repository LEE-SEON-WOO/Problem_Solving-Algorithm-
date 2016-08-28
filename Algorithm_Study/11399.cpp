#include <iostream>
#include <functional>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	priority_queue<int, vector<int>, greater<int> > pq;
	int N, v;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> v;
		pq.push(v);
	}
	long long int res1 = 0;
	long long int res2 = 0;
	int tmp = 0;
	while (!pq.empty())
	{
		tmp = pq.top();
		pq.pop();
		res1 += tmp;
		res2 += res1;
	}
	cout << res2;
	return 0;
}