#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int r, w, l;

	int idx = 1;
	while(1)
	{
		cin >> r;
		if (r == 0)
			return 0;
		cin >> w >> l;
		if ((2 * r)*(2*r) >= (l*l + w*w))
			cout << "Pizza " << idx++ << " fits on the table." << endl;
		else
		{
			cout << "Pizza " << idx++ << " does not fit on the table." << endl;
		}
	}
	return 0;
}