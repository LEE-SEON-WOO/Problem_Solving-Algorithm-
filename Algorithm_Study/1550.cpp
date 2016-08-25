#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	string a;
	cin >> a;
	long long int S = 0;
	for (size_t i=0; i < a.size(); i++)
	{
		if (a[i] <= '9')
			S += (a[i] - '0')*pow(16, a.size()-i-1);
		else
			S += (a[i] - 'A' + 10)*pow(16, a.size()-1-i);
	}
	
	cout << S << "\n";
	cout << dec << 0xabcdef << "\n";
	return 0;
}