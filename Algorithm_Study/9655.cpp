#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	if (N % 2) cout << "SK";
	else cout << "CY";
	return 0;
}