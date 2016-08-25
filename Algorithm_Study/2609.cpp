#include <iostream>
using namespace std;

void GCD_LCM(int a, int b);

int main()
{
	int A, B;
	cin >> A >> B;
	GCD_LCM(A, B);

	return 0;
}

void GCD_LCM(int a, int b)
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
	int lcm = a*b / gcd;
	cout << gcd << "\n" << lcm << "\n";

}