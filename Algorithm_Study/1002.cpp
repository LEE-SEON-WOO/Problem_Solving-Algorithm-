#include <iostream>
#include <cmath>
using namespace std;
struct x1
{
	int x;
	int y;
	int r;
}typedef _1;
int len(_1 x1, _1 x2)
{
	int x = (x1.x - x2.x)*(x1.x - x2.x);
	int y = (x1.y - x2.y)*(x1.y - x2.y);
	
	return (x + y);
}
int main()
{
	ios::sync_with_stdio(false);
	int N;
	_1 x1;
	_1 x2;
	cin >> N;
	while (N--)
	{
		cin >> x1.x >> x1.y >> x1.r;
		cin >> x2.x >> x2.y >> x2.r;
		if (len(x1, x2) == 0)
		{
			if (x1.r == x2.r)
			{
				cout << "-1\n";
			}
			else
				cout << "0\n";
		}
		else if ((len(x1, x2) == (x1.r + x2.r)*(x1.r + x2.r)) || (len(x1, x2) == (x1.r - x2.r)*(x1.r - x2.r)))
		{
			cout << "1\n";
		}
		else if ((len(x1,x2)< (x1.r - x2.r)*(x1.r-x2.r))|| (len(x1, x2)> (x1.r + x2.r)*(x1.r + x2.r)))
		{
			cout << "0\n";
		}
		else cout << "2\n";
		
	}
	return 0;
}