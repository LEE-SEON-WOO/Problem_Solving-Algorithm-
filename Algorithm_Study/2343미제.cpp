#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int les[100001];
int lay[100001];

int main()
{
	ios::sync_with_stdio(false);
	int N, M;
	scanf("%d %d", &N, &M);
	for (int i = 1; i <= N; i++)
	{
		scanf("%d", &les[i]);

		lay[i] = lay[i - 1] + les[i];
	}
	int end = lay[N];
	int min = end;
	int start = 0;
	while (start <= end)
	{
		int cnt = 1;
		int mid = (start + end) / 2;
		if (start == end)
		{
			min = start;
			break;
		}
		for (int i = 1; i <= N; i++) 
		{
			lay[i] = lay[i - 1] + les[i];
			if (lay[i] > mid) 
			{
				cnt++;
				lay[i] = les[i];
			}
		}
		if (cnt <= M)
			end = mid;
		else
			start = mid + 1;
	}
	printf("%d", min);

	return 0;
}
