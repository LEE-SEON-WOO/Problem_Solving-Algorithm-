#include <cstdio>
#include <map>
using namespace std;

map<int, int> arr;
int main()
{
	int N,num=0;
	scanf("%d", &N);
	while (N--)
	{
		scanf("%d",&num);
		arr[num]++;
	}
	int M;
	scanf("%d",&M);
	while (M--)
	{
		scanf("%d",&num);
		if (arr[num] > 0)
			printf("1\n");
		else
			printf("0\n");
			
	}
	return 0;
}