#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int N, X;
	int val = 0;
	cin >> N >> X;
	while (N--)
	{
		cin >> val;
		if (val < X)
			cout << val << " ";
	}
	return 0;
}