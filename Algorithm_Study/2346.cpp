#include <iostream>
#include <cstring>
#include <list>
#include <vector>
using namespace std;
struct stt {
	int n;
	int soon;
	bool visit;
}typedef st;
st s[1001];
int main()
{
	ios::sync_with_stdio(false);
	int N;
	memset(s, 0, sizeof(s));
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> s[i].n;
		s[i].visit = false;
	}
	vector<int> v;
	//////////////////////
	int tmp = s[0].n;
	v.push_back(1);
	s[0].visit = true;
	int cnt = 1;
	bool direct = false;
	if (tmp < 0)
	{
		tmp += N;
		direct = false;
	}
	else if (tmp >= N)
	{
		tmp -= N;
		direct = true;
	}
	while (cnt != N)
	{
		if (s[tmp].visit == false)
		{
			//cout << tmp << "¹æ¹®\n";
			++cnt;
			v.push_back((tmp + 1) % (N + 1));
			s[tmp].visit = true;
			if (s[tmp].n < 0)
			{
				direct = false;
			}
			else if (s[tmp].n > 0)
			{
				direct = true;
			}
			tmp += s[tmp].n;
			if (tmp < 0)
			{
				tmp += (N);

			}
			else if (tmp >= N)
			{
				tmp -= (N);
			}
		}
		else if (s[tmp].visit == true)
		{
			if (direct == true)
			{
				tmp++;
			}
			else if (direct == false)
			{
				tmp--;
			}
			if (tmp < 0)
			{
				tmp += (N);
			}
			else if (tmp >= N)
			{
				tmp -= (N);
			}
		}
	}
	for (int i = 0; i < N; i++)
	{
		cout << v[i] << ' ';
	}
	return 0;
}