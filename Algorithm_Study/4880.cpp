#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int a, b, c;
	while (true)
	{
		cin >> a >> b >> c;
		if (!a && !b && !c)
			break;
		if (b - a == c - b)
		{
			cout << "AP " << c + (b - a) << endl;
		}
		else
			cout << "GP " << c*(b / a) << endl;
	}
	return 0;
}