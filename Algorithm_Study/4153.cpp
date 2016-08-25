#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int a[3];
	while (true)
	{
		cin >> a[0] >> a[1] >> a[2];
		if (!a[0] && !a[1] && !a[2])
			break;
		sort(a, a + 3);
		if (a[0] * a[0] + a[1] * a[1] == a[2] * a[2])
			cout << "right" << endl;
		else
			cout << "wrong" << endl;
	}
	return 0;
}