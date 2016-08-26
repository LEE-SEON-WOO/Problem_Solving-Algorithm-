#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	deque<int> deq;
	string str;
	cin >> str;
	for (int i = str.size()-1; i >=0; i--)
	{
		int tmp = (int)str[i]-(int)'0';
		for (int j = 0; j < 3; j++)
		{
			deq.push_front(tmp % 2);
			tmp = tmp / 2;
		}
	}
	bool fir = false;
	for (int i = 0; i < deq.size(); i++)
	{
		if (deq[i] && !fir)
			fir = true;
		if(fir)
			cout << deq[i];
	}
	return 0;
}