#include <iostream>
#include <functional>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
	int N;
	cin >> N;
	priority_queue<int, vector<int>, greater<int> > min_heap;
	int V;
	for (size_t i = 0; i < N; i++)
	{
		cin >> V;
		min_heap.push(V);
	}
	int tmp = 0;
	int S = 0;
	while(!min_heap.empty())
	{
		//cout << min_heap.top() << " ";
		tmp = min_heap.top();
		min_heap.pop();
		S += tmp;
		if (min_heap.empty())
			break;
		//cout << min_heap.top() << " ";
		S += min_heap.top();
		tmp += min_heap.top();
		min_heap.pop();
		if(!min_heap.empty())
			min_heap.push(tmp);
	}
	cout << S;
	return 0;
}