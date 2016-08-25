#include <iostream>
#include <cstring>
using namespace std;
int arr[301][301];
int main()
{
	ios::sync_with_stdio(false);
	int xi, yj, x, y;
	int N, M;
	cin >> N >> M;
	memset(arr, 0, sizeof(arr));
	for (int i = 1; i <= N;i++)
	{
		for (int j = 1; j <= M; j++)
		{
			cin >> arr[i][j];
		}
	}
	int K, S = 0;
	cin >> K;
	while (K--)
	{
		S = 0;
		cin >> xi >> yj >> x >> y;
		for (int i = xi; i <= x; i++)
		{
			for (int j = yj; j <= y; j++)
			{
				//cout << "더하는것 : " << arr[i][j] << " ";
				S += arr[i][j];
			}
			//cout << endl;
		}
		cout << S << "\n";
	}
	return 0;
}