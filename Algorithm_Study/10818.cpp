#include<iostream>
#include <functional>
#include <queue>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	priority_queue<int, vector<int>, greater<int> > max_h;
	priority_queue<int, vector<int>, less<int> > min_h;
	int n, v;
	cin >> n;
	while (n--)
	{
		cin >> v;
		max_h.push(v);
		min_h.push(v);
	}
	cout << max_h.top() << ' ' << min_h.top();
	return 0;
}