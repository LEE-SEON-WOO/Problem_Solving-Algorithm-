#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int t;
	cin >> t;
	
	while (t--)
	{
		char p1, p2;
		int p1s = 0, p2s = 0;
		int n;
		cin >> n;
		while (n--)
		{
			cin >> p1 >> p2;
			if (p1 == 'R')
			{
				if (p2 == 'S')
				{
					p1s++;
				}
				else if (p2 == 'P')
				{
					p2s++;
				}
			}
			else if (p1 == 'S')
			{
				if (p2 == 'P')
				{
					p1s++;
				}
				else if (p2 == 'R')
				{
					p2s++;
				}
			}
			else if (p1 == 'P')
			{
				if (p2 == 'R')
				{
					p1s++;
				}
				else if (p2 == 'S')
				{
					p2s++;
				}
			}
		}
		if (p1s < p2s)
		{
			cout << "Player 2" << endl;
		}
		else if (p1s > p2s)
		{
			cout << "Player 1" << endl;
		}
		else cout << "TIE" << endl;
	}
	return 0;
}