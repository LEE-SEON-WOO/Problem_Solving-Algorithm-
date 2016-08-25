#include <cstdio>

int main()
{
	int T, N, C=0, Cs=0;
	double G, S = 0.0;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d", &N);
		for (int i = 0; i < N; i++)
		{
			scanf("%d%lf", &C, &G);
			Cs += C;
			S += (double)C*G;
		}
		printf("%d %.1f\n", Cs , S/Cs);
		S = 0;
		Cs = 0;
	}

	return 0;
}