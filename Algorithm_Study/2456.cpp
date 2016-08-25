#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
int candi[3][4];
struct Candi
{
	int sum = 0;
	int arr[4];
	int idx = 0;
}typedef c;
int main()
{
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	c C[4];
	memset(&C, 0, sizeof(C));
	int C1, C2, C3;
	while (N--)
	{
		cin >> C1 >> C2 >> C3;
		C[1].arr[C1]++;
		C[2].arr[C2]++;
		C[3].arr[C3]++;
	}
	for (int i = 1; i <= 3; i++)
	{
		C[i].idx = i;
		for (int j = 1; j <= 3; j++)
		{
			C[i].sum += j*C[i].arr[j];
		}
	}
	vector<c> _vec;
	int maxS = 0;
	for (int i = 1; i <= 3; i++)
	{
		if (maxS < C[i].sum)
		{
			maxS = C[i].sum;
			_vec.clear();
			_vec.push_back(C[i]);
		}
		else if (maxS == C[i].sum)
		{
			_vec.push_back(C[i]);
		}
	}
	//cout << _vec.size() << endl;
	//for (auto i : _vec)
	//{
	//	cout << i.idx << " ";
	//}
	if (_vec.size() == 1)
	{
		cout << _vec.begin()->idx << " " << _vec.begin()->sum << "\n";
	}
	else
	{
		vector<c>::iterator it = _vec.begin();
		for (vector<c>::iterator it_t = ++_vec.begin(); it_t != _vec.end(); it_t++)
		{
			if ((it->arr[3] == it_t->arr[3])&& (it->arr[2] == it_t->arr[2])
				&& (it->arr[1] == it_t->arr[1]))
			{
				cout << 0 << " " << maxS << "\n";
				break;
			}
			if (it->arr[3] < it_t->arr[3])
			{
				cout << it_t->idx << " " << maxS << "\n";
				break;
			}
			else if(it->arr[3] > it_t->arr[3])
			{
				cout << it->idx << " " << maxS << "\n";
				break;
			}
			else if (it->arr[2] < it_t->arr[2])
			{
				cout << it_t->idx << " " << maxS << "\n";
				break;
			}
			else if (it->arr[2] > it_t->arr[2])
			{
				cout << it->idx << " " << maxS << "\n";
				break;
			}
			else if (it->arr[1] < it_t->arr[1])
			{
				cout << it_t->idx << " " << maxS << "\n";
				break;
			}
			else if (it->arr[1] > it_t->arr[1])
			{
				cout << it->idx << " " << maxS << "\n";
				break;
			}
			it = it_t;
		}
	}
	

	return 0;
}