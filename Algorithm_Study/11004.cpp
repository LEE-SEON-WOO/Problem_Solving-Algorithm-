#include <cstdio>
#include <queue>
#include <functional>
#include <algorithm>
using namespace std;
int arr[5000001];
int main()
{
	//priority_queue<int, vector<int>, greater<int> > pq;
	int N, K, v;
	scanf("%d%d", &N, &K);
	K--;
	for(size_t i=0; i<N; i++)
	{
		scanf("%d", &arr[i]);
	}
	nth_element(arr, arr + K, arr + N);
	printf("%d", arr[K]);
	return 0;
}