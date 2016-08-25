#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	int rem=0;
	int div=0;
	int res = 0;
	set<int> s;
	s.insert(N);
	while(1)
	{
		rem = N % 10;
		div = N / 10;
		res = rem + div;
		N = (rem * 10) + res % 10;
		if (s.count(N))
		{
			break;
		}
		else
		{
			//cout << "res = " << res << " remain = " << rem << " N= " << N << endl;
			s.insert(N);
		}
	} 
	cout << s.size() << endl;
	return 0;
}