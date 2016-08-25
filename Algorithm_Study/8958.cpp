#include <iostream>
#include <string>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	string a;
	int T;
	int N = 0, S = 0;
	cin >> T;
	while (T--)
	{
		cin >> a;
		char before = 'X';
		N = 0;
		S = 0;
		for (size_t i = 0; i < a.size(); i++)
		{
			if (a[i] == 'O')
			{
				S++;
				if (before == 'O')
				{
					N++;
					S += N;
				}
				else
					before = 'O';
			}
			else
			{
				N = 0;
				before = 'X';
			}
		}
		cout << S << "\n";
	}
	return 0;
}