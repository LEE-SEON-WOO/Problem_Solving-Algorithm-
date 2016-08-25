#include <iostream>
using namespace std;
int len[] = { 64, 32, 16, 8, 4, 2, 1 };
int chk(int X)
{
	for (int i = 0; i < 7; i++)
	{
		if (X >= len[i])
			return len[i];
	}
}
int main()
{
	ios::sync_with_stdio(false);
	
	int X;
	cin >> X;
	int cnt = 0;
	while(X)
	{
		cnt++;
		X -= chk(X);
	}
	cout << cnt;
	return 0;
}