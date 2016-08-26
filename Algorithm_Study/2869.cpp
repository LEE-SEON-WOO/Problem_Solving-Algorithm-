#include <cstdio>

int main()
{
	int A, B, V;
	scanf("%d %d %d", &A, &B, &V);
	int t = 0;
	for (int i = 1; i <= 1000000000; i++)
	{
		t += A;
		if (t >= V)
		{
			printf("%d", i);
			break;
		}
		else t -= B;
	}
	return 0;
}