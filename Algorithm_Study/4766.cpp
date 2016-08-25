#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	double T, S;
	cin >> S;
	while (true)
	{
		cin >> T;
		if (T == 999)
			break;
		else
		{
			//if (S < T)
			//{
				cout << setprecision(2) << fixed << (double)T - (double)S << endl;
			//}
			//else if(S>=T)
				//cout << setprecision(2) << fixed << (double)T - (double)S << endl;
		}
		S = T;
	}
	return 0;
}