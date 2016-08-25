#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;
int main()
{
	vector<int> v;
	int A, B;
	scanf("%d %d", &A, &B);
	int V;
	v.assign(A + B, 0);
	for (int i = 0; i < A+B; i++)
	{
		scanf("%d", &V);
		v[i] = V;
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
		printf("%d ", v[i]);
	return 0;
}