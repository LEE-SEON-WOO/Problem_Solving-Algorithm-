#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	deque<int> dq;
	int n;
	string str;
	int N;
	for(cin>>n;n--;)
	{
		cin >> str;
		if (!str.compare("push_back"))
		{
			cin >> N;
			dq.push_back(N);
		}
		else if (!str.compare("push_front"))
		{
			cin >> N;
			dq.push_front(N);
		}
		else if (!str.compare("pop_front"))
		{
			if (dq.empty())
				cout << -1 << endl;
			else
			{
				cout << dq.front() << endl;
				dq.pop_front();
			}
		}
		else if (!str.compare("pop_back"))
		{
			if (dq.empty())
				cout << -1 << endl;
			else
			{
				cout << dq.back() << endl;
				dq.pop_back();
			}
		}
		else if (!str.compare("front"))
		{
			if (dq.empty())
				cout << -1 << endl;
			else cout << dq.front() << endl;
		}
		else if (!str.compare("back"))
		{
			if (dq.empty())
				cout << -1 << endl;
			else cout << dq.back() << endl;
		}
		else if (!str.compare("size"))
			cout << dq.size() << endl;
		else if (!str.compare("empty"))
			cout << dq.empty() << endl;
	}
	return 0;
}