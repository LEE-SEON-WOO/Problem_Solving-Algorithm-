#include <iostream>
using namespace std;
int LCM(int a, int b);
int main()
{
	int A, B;
	int T;
	cin >> T;
	while (T--)
	{
		cin >> A >> B;
		cout << LCM(A, B) <<"\n";
	}
	return 0;
}
int LCM(int a, int b)
{
	int z = 0;
	int x = a;
	int y = b;
	while (1)
	{
		z = x% y;			// 나머지 구함

		if (z == 0)		// 나머지 0 일때까지
		{
			break;
		}

		x = y;		//다음 줄 진행하기 위해
		y = z;

	}
	int gcd = y;
	int lcm = a*b / gcd;		//최소 공배수
	return lcm;
}