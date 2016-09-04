#include <iostream>
using namespace std;
typedef long long int lint;
int main()
{
	ios::sync_with_stdio(false);
	lint i = 0, S = 0, t;
	cin >> S;
	for (i = 1; i <= S; i++)
	{
		t = (i*(i + 1)) / 2;
		if (t >= S)
			break;
	}
	if (t == S)
		cout << i << endl;
	else
	{
		cout << i - 1 << endl;
	}
	//cout << t << ' ' << i <<endl;
	return 0;
}