#include <iostream>
using namespace std;

int H=0;
int M=0;
int S=0;
int D = 0;
int main()
{
	ios::sync_with_stdio(false);
	cin >> H >> M >> S;
	cin >> D;
	int T = 0;
	T = H * 3600 + M * 60 + S + D;
	T = T % (24*3600);
	S = T % 60;
	T = T / 60;
	M = T % 60;
	T = T / 60;
	H = T;
	cout << H << " " << M << " " << S << "\n";
	return 0;
}