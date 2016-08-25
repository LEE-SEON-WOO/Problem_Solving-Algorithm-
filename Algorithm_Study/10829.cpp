#include <iostream>
#include <stack>
#include <cstdlib>
#include <cstring>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	long long int N;
	cin >> N;
	stack<int> st;
	while(N!=0)
	{
		st.push(N % 2);
		N = N / 2;

	}

	while (!st.empty())
	{
		cout << st.top();
		st.pop();
	}
	

	return 0;
}