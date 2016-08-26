#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int T, s, n, option1, option2;
	cin >> T;
	while (T--)
	{
		cin>>s >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> option1 >> option2;
			s += (option1*option2);
		}
		cout << s << endl;
	}
	return 0;
}