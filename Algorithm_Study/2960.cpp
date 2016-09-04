#include <iostream>
#include <queue>
using namespace std;

//int arr[1001];
bool visit[1001];
bool pri(int n)
{
	int cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n%i == 0)
			cnt++;
	}
	if (cnt == 2)
		return 1;
	else return 0;
}
int main()
{
	ios::sync_with_stdio(false);
	int N, K;
	cin >> N >> K;
	int cnt = 0;
	for (int i = 2; i <= N; i++)
	{
		if (!visit[i] && pri(i))
		{
			for (int j = 1; i*j <= N; j++)
			{
				if(!visit[i*j])
				{
					cnt++;
					if (cnt == K)
					{
						cout << i*j << endl;
						return 0;
					}
					//cout << i * j << endl;
					visit[i*j] = true;

				}
				
			}
		}
			
	}
	return 0;
}