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
		z = x% y;			// ������ ����

		if (z == 0)		// ������ 0 �϶�����
		{
			break;
		}

		x = y;		//���� �� �����ϱ� ����
		y = z;

	}
	int gcd = y;
	int lcm = a*b / gcd;		//�ּ� �����
	return lcm;
}