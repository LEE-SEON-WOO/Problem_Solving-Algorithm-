#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int T;
	deque<int> v;
	cin >> T;
	while (T--)
	{
		v.assign(5, 0);
		for (int i = 0; i < 5; i++)
		{
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		int s = 0;
		if (v[3] - v[1] >= 4)
			cout << "KIN" << endl;
		else
		{
			for (int i = 1; i < 4; i++)
			{
				s += v[i];
			}
			cout << s << endl;
		}
		v.clear();
	}

	return 0;
}