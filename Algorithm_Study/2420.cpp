#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int INT;
int main()
{
	ios::sync_with_stdio(false);
	INT N, M;
	cin >> N >> M;
	cout << abs(N - M);
	return 0;
}