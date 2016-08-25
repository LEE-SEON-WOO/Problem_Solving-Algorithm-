#include <iostream>
#include <queue>
using namespace std;
queue<int> que;
void push()
{
	int value = 0;
	cin >> value;
	que.push(value);
}
void pop()
{
	if (que.empty())
	{
		cout << -1 << "\n";
		return;
	}
	cout << que.front() << "\n";
	que.pop();	
}
void size()
{
	cout << que.size() << "\n";
}
void empty()
{
	if (que.empty())
		cout << 1 << "\n";
	else
		cout << 0 << "\n";
}
void back()
{
	if (que.empty())
	{
		cout << -1 << "\n";
		return;
	}
	cout << que.back() << "\n";
}
void front()
{
	if (que.empty())
	{
		cout << -1 << "\n";
		return;
	}
	cout << que.front() << "\n";
}
int main()
{
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	char buf[10];
	while (N--)
	{
		cin >> buf;
		if (strcmp(buf, "push") == 0)
		{
			push();
		}
		else if (strcmp(buf, "pop") == 0)
		{
			pop();
		}
		else if (strcmp(buf, "size") == 0)
		{
			size();
		}
		else if (strcmp(buf, "empty") == 0)
		{
			empty();
		}
		else if (strcmp(buf, "back") == 0)
		{
			back();
		}
		else if (strcmp(buf, "front") == 0)
		{
			front();
		}
	}
	return 0;
}