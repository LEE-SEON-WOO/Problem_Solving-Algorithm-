#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	string a;
	cin >> a;
	for (int i = 0; i < a.size(); i++)
	{
		if ((int)a[i] >= 97)
			cout << (char)((int)a[i] - 32);
		else if ((int)a[i] <= 90)
			cout << (char)((int)a[i] + 32);
	}
	return 0;
}