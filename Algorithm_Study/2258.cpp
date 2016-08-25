#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	//int A, B;
	//cin >> A >> B;
	//cout << A + B << endl;
	int A;
	cin >> A;
	for (int i = 1; i <=A; i++)
	{
		for (int k = 1; k < i; k++)
		{
			cout << " ";
		}
		for (int j = A*2; j > 2*i-1; j--)
		{
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}