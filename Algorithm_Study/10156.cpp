#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int N, K, M;
	cin >> N >> K >> M;
	if (N*K - M > 0)
	cout << N*K - M;
	else
		cout << 0;
	return 0;
}