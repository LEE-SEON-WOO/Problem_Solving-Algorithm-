#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int N, A = 0;
	int i = 4;
	int j = 3;
	for(int i=0;i<3; i++)
	{
		for(int j=0; j<4; j++)
		{
			cin >> N;
			if (N == 0)
				A++;
		}
		switch (A)
		{
		case 1:
			cout << "A\n";
			A = 0;
			continue;
		case 2:
			cout << "B\n";
			A = 0;
			continue;
		case 3:
			cout << "C\n";
			A = 0;
			continue;
		case 4:
			cout << "D\n";
			A = 0;
			continue;
		case 0:
			cout << "E\n";
			continue;
		}
	}
	return 0;
}