#include <iostream>
using namespace std;

int main()
{
	int T;
	for (cin>>T; T--;)
	{
		int y, a, b, c, n;
		cin>> y >> a >> b >> c >>n;
		if ((a % 2 == 0 && b % 2 == 1) || (n == 1 && a == 1 && b == 0))//�ذ� �ϳ�������.
		{
			int x = 0;
			for (int i = 1; i <= n; i++)
			{
				if ((a*x*x + b*x + c - y) & ((1 << i) - 1))
					x ^= (1 << (i - 1));
			}
			cout << x << "\n";
		}
		else cout <<"No unique solution\n";	//�ذ� ������ ���� ���
	}
	return 0;
}