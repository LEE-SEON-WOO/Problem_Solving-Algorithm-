#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	cin.ignore(1, '\n');
	string str;
	int cnt = 0;
	while (N--)
	{
		getline(cin, str);
		cout << ++cnt << ". " << str << endl;
	}

	return 0;
}