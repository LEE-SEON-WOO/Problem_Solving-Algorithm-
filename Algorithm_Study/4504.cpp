#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	int N;
	while(true)
	{
		cin >> N;
		if (N == 0)
			break;
		if (N%n == 0)
		{
			cout << N << " is a multiple of " << n << "."<< endl;
		}
		else
		{
			cout << N << " is NOT a multiple of " << n << "."<<endl;
		}
	}

	return 0;
}