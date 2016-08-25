#include <iostream>
using namespace std;

int main()
{
	int N, a, b;
	cin >> N;
	while (N--)
	{
		cin >> a >> b;
		cout << "You get " << a / b << " piece(s) and your dad gets " << a%b << " piece(s).\n";
	}
}