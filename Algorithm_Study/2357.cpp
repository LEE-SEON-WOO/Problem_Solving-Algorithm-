#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int idx = 1;
int N, M;
vector<int> dat;
vector<int> maxTree;
vector<int> minTree;
int maxQuery(int left, int right)
{
	left += idx - 1;
	right += idx - 1;
	int mmax = INT_MIN;
	while (left <= right)
	{
		if (left % 2 == 1) { mmax = max(mmax, maxTree[left++]); }
		if (right % 2 == 0) { mmax = max(mmax, maxTree[right--]); }
		left /= 2; right /= 2;
	}
	return mmax;
}
int minQuery(int left, int right)
{
	left += idx - 1;
	right += idx - 1;
	int mmax = INT_MAX;
	while (left <= right)
	{
		if (left % 2 == 1) { mmax = min(mmax, minTree[left++]); }
		if (right % 2 == 0) { mmax = min(mmax, minTree[right--]); }
		left /= 2; right /= 2;
	}
	return mmax;
}
int main()
{
	ios::sync_with_stdio(false);
	scanf("%d %d", &N, &M);
	dat.assign(N, 0);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &dat[i]);
	}
	////
	while (idx < N)idx *= 2;
	minTree.assign(idx * 2 + 1, INT_MIN);
	maxTree.assign(idx * 2 + 1, INT_MAX);
	for (int i = 0; i < N; i++)
	{
		maxTree[i + idx] = dat[i];
		minTree[i + idx] = dat[i];
	}
	for (int i = idx - 1; i >= 1; i--)
	{
		maxTree[i] = max(maxTree[i * 2], maxTree[i * 2 + 1]);
		minTree[i] = min(minTree[i * 2], minTree[i * 2 + 1]);
	}
	////
	while (M--)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d %d\n", minQuery(a, b), maxQuery(a, b));
	}
	return 0;
}