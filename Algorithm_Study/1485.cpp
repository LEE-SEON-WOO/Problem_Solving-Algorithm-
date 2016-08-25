#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
typedef long long ll;
pair<ll, ll> p[4];
ll dist[6];
ll d(pair<ll,ll> p1, pair<ll, ll> p2)
{
	return (p1.first - p2.first)*(p1.first - p2.first) + (p1.second - p2.second)*(p1.second - p2.second);
}
int main()
{
	ios::sync_with_stdio(false);
	int T;
	cin >> T;
	while (T--)
	{

		for (int i = 0; i < 4; i++)
		{
			cin >> p[i].first >> p[i].second;
		}
		int k = 0;
		for (int i = 0; i < 3; i++)
		{
			for (int j = i+1; j < 4; j++)
			{
				dist[k++] = d(p[i], p[j]);
			}
		}
		sort(dist, dist + 6);
		int cnt = 0;
		for (int i = 0; i < 6; i++)
		{
			if (dist[i] == dist[i + 1])
				cnt++;
		}
		if (cnt == 4)
			cout << 1 << endl;
		else cout << 0 << endl;
		
	}
	return 0;
}