#include <string>
#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	string str[50];
	for (int i = 0; i < N; i++)
	{
		cin >> str[i];
	}
	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j < str[i].size(); j++)
		{
			if (str[i - 1][j] != str[i][j])
				str[i][j] = '?';
		}
	}
	cout << str[N - 1];
	return 0;
}