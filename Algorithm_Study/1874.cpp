#include <iostream>
#include <stack>
#include <deque>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int n, v;
	stack<int> st;
	deque<int> deq;
	string str;
	cin >> n;
	deq.assign(n, 0);
	for (size_t i = 0; i < n; i++)
	{
		cin >> v;
		deq[i] = v;
	}
	//cout << st.top() << endl;
	for (int idx = 1, i = 1; i <= n+1; i++)
	{
		if (str.size() > 2 * n)
		{
			cout << "NO\n";
			return 0;
		}
		if (st.empty())
		{
			//cout << "+\n";
			st.push(idx++);
			str.append("+");
		}
		while (!st.empty())
		{
			if (str.size() > 2*n)
			{
				cout << "NO\n";
				return 0;
			}
			if (st.top() == deq.front())
			{
				str.append("-");
				//cout << "-\n";
				st.pop();
				deq.pop_front();
			}
			else if (st.top() != deq.front())
			{
				/*if (deq.front()>idx)
				{*/
				str.append("+");
				//cout << "+\n";
				st.push(idx++);

				//}
			}
		}

		i = idx;
	}
	for (size_t i = 0; i < str.size(); i++)
	{
		cout << str[i] << "\n";
	}
	return 0;
}