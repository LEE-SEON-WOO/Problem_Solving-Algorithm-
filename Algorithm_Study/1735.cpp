#include <iostream>
using namespace std;

int GCD_LCM(int a, int b)
{
	int z = 0;
	int x = a;
	int y = b;

	while (1)
	{
		z = x% y;
		if (z == 0)
		{
			break;
		}
		x = y;
		y = z;
	}
	int gcd = y;
	//int lcm = a*b / gcd;
	return gcd;

}
int main()
{
	ios::sync_with_stdio(false);
	int son1, mom1, son2, mom2;
	cin >> son1 >> mom1 >> son2 >> mom2;
	int mom3 = mom1*mom2;
	int son3 = mom1*son2 + mom2*son1;
	if (GCD_LCM(mom3, son3) == 1)
		cout << son3 << ' ' << mom3;
	else
		cout << son3 / GCD_LCM(mom3, son3) <<' ' <<  mom3 / GCD_LCM(mom3, son3);
	return 0;
}