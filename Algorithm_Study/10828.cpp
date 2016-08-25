#include <iostream>
#include <cstring>
using namespace std;
int stack[10000];
int idx = 0;
void push()
{

	cin >> stack[idx++];
}
void pop()
{
	if (idx == 0)
	{
		cout << -1 << "\n";
		return;
	}
	cout << stack[idx-1] <<"\n";
	stack[idx--] = -1;
}
void size()
{
	cout << idx << "\n";
}
void empty()
{
	if (idx == 0)
		cout << 1 << "\n";
	else
		cout << 0 << "\n";
}
void top()
{
	if (idx == 0)
	{
		cout << -1 << "\n";
		return;
	}
	cout << stack[idx-1] << "\n";
}
int main()
{
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	memset(stack, -1, sizeof(stack));
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
		else if (strcmp(buf, "top") == 0)
		{
			top();
		}
	}
	return 0;
}