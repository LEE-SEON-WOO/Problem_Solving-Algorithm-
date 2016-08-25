#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	vector<int> v;
	scanf("%d", &n);
	v.assign(n, 0);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &v[i]);
	}
	sort(v.begin(), v.end());
	int val;
	scanf("%d", &m);
	for(int i=0; i<m; i++)
	{
		scanf("%d", &val);
		printf("%d ", binary_search(v.begin(), v.end(), val));
	}
	
	return 0;
}