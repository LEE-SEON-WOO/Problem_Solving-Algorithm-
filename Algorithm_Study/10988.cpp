#include <iostream>
#include <string>
using namespace std;

string buf;
bool check = 0;
void func(int s, int e)
{
	if (s >= e)
	{
		check = true;
		return;
	}
	if (buf[s] == buf[e])
	{
		func(s + 1, e - 1);
	}
	else  if (buf[s] != buf[s])
	{
		check = false;
		return;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin >> buf;
	func(0, buf.size() - 1);
	cout << check;
	return 0;
}