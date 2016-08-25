//#include <iostream>
#include <stack>
#include <cstring>
#include <cstdio>
using namespace std;

stack<pair<int, int> > s;
int main()
{
	//ios::sync_with_stdio(false);
	int N, V;
	scanf("%d", &N);
	//cin >> N;
	for (int i = 1; i <= N; i++)
	{
		//cin >> V;
		scanf("%d", &V);
		while (!s.empty())
		{
			if (s.top().second > V)
			{
				//cout << s.top().first << " ";
				printf("%d ", s.top().first);
				break;
			}
			s.pop();
		}
		if (s.empty())
			printf("0 ");
			//cout << "0 ";
		s.push(make_pair(i, V));
	}
	return 0;
}