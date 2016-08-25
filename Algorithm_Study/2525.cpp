#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int A, B;
	cin >> A >> B;
	int M;
	cin >> M;
	int S = 0;
	S = A * 60 + B + M;
	S = S % (24 * 60);
	B = S % 60;
	A = S / 60;
	cout << A << " " << B << "\n";

	return 0;
}