#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	string str;
	int T;
	cin >> T;
	int N;
	while (T--)
	{
		cin >> N>>str;
		for (size_t i = 0; i < str.size(); i++)
		{
			for (size_t j = 0; j < N; j++)
			{
				cout << str[i];
			}
		}
		cout << endl;
	}
	return 0;
}