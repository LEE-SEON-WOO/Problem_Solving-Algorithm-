#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int a[10], b[10], ra = 0, rb = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < 10; i++)
	{
		cin >> b[i];
	}
	for (int i = 0; i < 10; i++)
	{
		if (a[i] > b[i])
			ra++;
		else if (a[i] < b[i])
			rb++;
	}
	if (ra < rb)
		cout << 'B';
	else if (ra > rb)
		cout << 'A';
	else cout << 'D';
	return 0;
}