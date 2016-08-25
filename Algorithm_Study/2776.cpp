#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int T, N, M, v;
	scanf("%d", &T);
	vector<int> vn;
	while (T--)
	{
		scanf("%d", &N);
		vn.assign(N, 0);
		for (int i = 0; i < N; i++)
		{
			scanf("%d", &vn[i]);
		}
		sort(vn.begin(), vn.end());
		scanf("%d", &M);
		for (int i = 0; i < M; i++)
		{
			scanf("%d", &v);
			if (binary_search(vn.begin(), vn.end(), v))
				printf("1\n");
			else
				printf("0\n");
		}
		vn.clear();
	}
	return 0;
}