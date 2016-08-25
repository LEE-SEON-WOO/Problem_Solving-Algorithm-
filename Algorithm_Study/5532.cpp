#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int L, A, B, C, D;
	cin >> L >> A >> B >> C >> D;
	int M, K;
	M = A / C;
	if (A%C != 0)
		M++;
	K = B / D;
	if (B%D != 0)
		K++;
	if (M < K)
		cout << L - K << endl;
	else
		cout << L - M << endl;

	return 0;
}