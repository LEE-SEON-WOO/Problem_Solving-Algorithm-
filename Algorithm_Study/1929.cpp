#include <cstdio>
int arr[1000001];
int main()
{
	int M, N;
	scanf("%d %d", &M, &N);
	for (int i = 2; i <= N; i++)
	{
		if (!arr[i])
		{
			if (i >= M)
				printf("%d\n", i);
			for (int j = i; j <= N; j += i) 
				arr[j] = true;
		}
	}
	return 0;
}