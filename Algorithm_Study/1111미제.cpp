#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	vector<int> v(N+1,0);
	bool zero = false;
	for (int i = 1; i<=N; i++)
	{
		cin >> v[i];
		if (v[i - 1] == v[i])
			zero = true;
	}


}