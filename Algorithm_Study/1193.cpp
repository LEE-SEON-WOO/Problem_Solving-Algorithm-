#include <iostream>
using namespace std;

typedef long long int INT;
int main()
{
	ios::sync_with_stdio(false);
	int X;
	cin >> X;

	INT lev = 0;
	for (int i = 1; i <= X; i++)
	{
		if (((i*(i - 1)) / 2) < X)
		{
			if (X <= ((i*(i + 1)) / 2))
			{
				lev = ((i*(i + 1)) / 2) - ((i*(i - 1)) / 2);
				break;
			}
		}
	}
	int L;
	int R;
	if (lev % 2 == 0)
	{
		X = X- ((lev*(lev - 1)) / 2);
		R = lev; 
		L = 1;
		//cout << L << '/' << R << endl;
		for(int i=1; i<X; i++)
		{
			L++;
			R--;
		}
	}
	else if(lev%2 == 1)
	{
		X = X- ((lev*(lev- 1)) / 2);
		//cout << X << endl;
		L = lev;
		R = 1;
		//cout << L << '/' << R << endl;
		for (int i = 1; i<X; i++)
		{
			L--;
			R++;
		}
	}
	cout << L << '/' << R;
	return 0;
}