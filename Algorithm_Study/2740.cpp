#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	
	int N, M;
	cin >> N >> M;
	
	vector<vector<int> > v1;
	v1.assign(N, vector<int>(M, 0));
	for (int i = 0; i < v1.size(); i++)
	{
		for (int j = 0; j < v1[i].size(); j++)
		{
			cin >> v1[i][j];
		}
	}
	int K;
	cin >> M >> K;
	vector<vector<int> > v2;
	v2.assign(M, vector<int>(K, 0));
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < K; j++)
		{
			cin >> v2[i][j];
		}
	}
	vector<vector<int> >v3;
	v3.assign(N, vector<int>(K));
	int res =0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			for (int k = 0; k < K; k++)
			{
				//cout << v1[i][j] << " * " << v2[j][k] << " = " << v1[i][j] * v2[j][k] << " \n";
				v3[i][k] += v1[i][j] * v2[j][k];
			}
		}
	}
	for (auto i : v3)
	{
		for (auto j : i)
			cout << j << " ";
		cout << "\n";
	}
	return 0;
}