#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
typedef long long int INT;

INT arr[15][15];
void func(int I, int J)
{
	for (int j = 1; j <= J; j++)
	{
		arr[I][J] += arr[I-1][j];
	}
}
int main()
{
	ios::sync_with_stdio(false);
	int T, k, n;
	memset(arr, 0, sizeof(arr));
	for (int i = 1; i <= 14; i++)
	{
		arr[0][i] = i;
	}
	for (int i = 1; i <= 14; i++)
	{
		for (int j = 1; j <= 14; j++)
		{
			func(j, i);
		}
	}
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d %d", &k, &n);
		printf("%lld\n", arr[k][n]);
	}

	return 0;
}