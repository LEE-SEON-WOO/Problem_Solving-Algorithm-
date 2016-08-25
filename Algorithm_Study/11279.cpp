#include <cstdio>
#include <functional>
#include <algorithm>
#include <queue>

int main()
{
	int N;
	scanf("%d", &N);

	std::priority_queue<int> max_h;
	int v;
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &v);
		if (v == 0)
		{
			if (max_h.empty())
				printf("0\n");
			else
			{
				printf("%d\n", max_h.top());
				max_h.pop();
			}
		}
		else
		{
			max_h.push(v);
		}
	}
	return 0;
}