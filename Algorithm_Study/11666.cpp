#include <iostream>
#include <algorithm>
#include <queue>
#include <functional>
#include <vector>
using namespace std;
pair<int, int> arr[300000];
int main()
{
	ios::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].first >> arr[i].second;
	}
	sort(arr, arr+n);
	priority_queue<int, vector<int>, greater<int> > pq;
	int res = 0;
	for (int i = 0; i < n; i++)
	{
		while (!pq.empty())
		{
			if (pq.top() > arr[i].first)
				break;
			if (pq.top() + m >= arr[i].first)
			{
				res++;
				pq.pop();
				break;
			}
			pq.pop();
		}
		pq.push(arr[i].first + arr[i].second);
	}
	cout << res << endl;
	return 0;
}