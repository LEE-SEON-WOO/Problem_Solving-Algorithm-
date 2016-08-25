#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int S;
	cin >> S;
	int V;
	for (int i = 1; i < 10; i++)
	{
		cin >> V;
		S -= V;
	}
	cout << S;
	return 0;
}