#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int a, b, c;
	cin >> a >> b >> c;
	if ((a == 60 && b == 60 && c == 60))
		cout << "Equilateral";
	else if ((a + b + c == 180) && ((a == b) || (a == c) || (c == b)))
		cout << "Isosceles";
	else if ((a + b + c == 180) && ((a != b) && (a != c) && (c != b)))
		cout << "Scalene";
	else if ((a + b + c != 180))
		cout << "Error";
	return 0;
}