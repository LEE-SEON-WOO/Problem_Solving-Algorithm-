#include <cstdio>
#include <functional>
#include <utility>
#include <algorithm>
#include <queue>
#include <cmath>
using namespace std;

int main()
{
	priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > min_h;
	int N, v;
	scanf("%d", &N);
	while (N--)
	{
		scanf("%d", &v);
		if (v == 0)
		{
			if (min_h.empty())
				printf("0\n");
			else
			{
				if (min_h.size() == 1)
				{
					printf("%d\n", min_h.top().second);
					min_h.pop();
				}
				else if (min_h.size() > 1)
				{
					pair<int, int> temp1 = min_h.top();
					min_h.pop();
					pair<int, int> temp2 = min_h.top();
					min_h.pop();
					if (temp1.first == temp2.first)
					{
						printf("%d\n", min(temp1, temp2).second);
						min_h.push(max(temp1, temp2));
					}
					else if (temp1.first < temp2.first)
					{
						printf("%d\n", temp1.second);
						min_h.push(temp2);
					}
					else
					{
						printf("%d\n", temp2.second);
						min_h.push(temp1);
					}

				}

			}
		}
		else
		{
			min_h.push(make_pair(abs(v), v));
		}
	}
	return 0;
}