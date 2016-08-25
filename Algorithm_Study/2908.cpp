#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
char strA[1000];
char strB[1000];
int main()
{
	ios::sync_with_stdio(false);
	int A, B;
	cin >> strA;
	reverse(strA, strA + strlen(strA));
	A = atoi(strA);
	cin >> strB;
	reverse(strB, strB + strlen(strB));
	B = atoi(strB);
	cout << max(A, B) << "\n";
	return 0;
}