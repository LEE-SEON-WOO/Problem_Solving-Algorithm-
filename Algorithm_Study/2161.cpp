#include <iostream>
#include <queue>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	queue<int> q;
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		q.push(i);
	}
	while (q.size()!=1)
	{
		//cout << q.front() << " ";
		q.pop();
		q.push(q.front());
		q.pop();
	}
	cout << q.front() << "\n";
	return 0;
}