#include <iostream>
using namespace std;
typedef unsigned long long int INT;

int main()
{
	ios::sync_with_stdio(false);
	int N;
	INT res = 0;
	cin >> N;
	for (size_t i = 1; i < N; i++)
	{
		//cout << (INT)i*N + (INT)i << endl;
		res += (INT)i*N + (INT)i;
	}
	cout << res;
	return 0;
}