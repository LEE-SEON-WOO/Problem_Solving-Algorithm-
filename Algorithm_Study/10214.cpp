#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int T;
	cin >> T;
	while (T--)
	{
		int y = 0, k = 0;
		for (int i = 0; i < 9; i++)
		{
			int s1, s2;
			cin >> s1 >> s2;
			y+=s1;
			k+=s2;
		}
		if (y > k)
			cout << "Yonsei"<<endl;
		else if (y < k)
			cout << "Korea" << endl;
		else cout << "Draw" << endl;
	}

	return 0;
}