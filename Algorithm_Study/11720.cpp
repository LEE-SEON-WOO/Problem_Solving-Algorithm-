#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	string str;
	int S =0;
	cin >> str;
	for (int i = 0; i < str.size(); i++)
	{
		S += (str[i]-'0');
	}
	cout << S;
	return 0;
}