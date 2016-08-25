#include <cstdio>
#include <algorithm>
#include <functional>
using namespace std;
int arr[5000001];

int main()
{
	int N, M, mid, v, s, e;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	sort(arr, arr + N);
	scanf("%d", &M);
	for (int i = 0; i < M; i++)
	{
		scanf("%d", &v);
		if (!binary_search(arr, arr + N, v))
			printf("0 ");
		else
		{
			s = 0;
			e = N - 1;
			mid = (s + e) / 2;
			int cnt = 0;
			while (s < e)
			{
				if (v > arr[mid])
				{
					s = mid + 1;
				}
				else if (v < arr[mid])
				{
					e = mid - 1;
				}
				else
				{
					int tmp = mid;
					while (1)
					{
						tmp++;
						if (tmp > e)
							break;
						if (arr[tmp] == v)
							cnt++;
					}
					tmp = mid;
					while (1)
					{
						tmp--;
						if (tmp < s)
							break;
						if(arr[tmp] == v)
							cnt++;
					}
					break;
				}
				mid = (s + e) / 2;
			}
			printf("%d ", cnt+1);
		}
	}
	
	return 0;
}