#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	int S, T;
	int arr[10];
	scanf("%d", &T);
	while (T--)
	{
		for (int i = 0; i < 10; i++)
		{
			scanf("%d", &arr[i]);
		}
		sort(arr, arr + 10);
		printf("%d\n", arr[7]);
	}
	return 0;
}